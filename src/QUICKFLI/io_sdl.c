/* io_sdl.c */

#include <SDL/SDL.h>
#include "io.h"

static SDL_Surface *s_surface;
static Uint8 *s_key;

int
init_system(void)
{
	SDL_Init(SDL_INIT_TIMER | SDL_INIT_VIDEO);

	s_surface = SDL_SetVideoMode(320, 200, 8, SDL_HWSURFACE | SDL_DOUBLEBUF);
	if (s_surface == NULL) {
		puts("Couldn't get a 320x200 256 color VGA screen");
		return 0;
	}

	s_key = SDL_GetKeyState(NULL);

	vf.p = s_surface->pixels;

	return 1;
}

void
cleanup(void)
{
	SDL_Quit();
}

unsigned int
strobe_keys(void)
{
	SDL_Event event;

	SDL_PollEvent(&event);

	if (s_key[SDLK_ESCAPE]) return ESC;
	if (s_key[SDLK_SPACE]) return SPACE;

	return 0;
}

void
cset_colors(const UBYTE *src)
{
	SDL_Colour col[256];
	unsigned int count = ((const UWORD *)src)[0];
	int dst = 0;
	src += 2;

	for (; count > 0; count--) {
		int nskip = src[0];
		int ncopy = src[1];
		int c;

		if (ncopy == 0)
			ncopy = 256;

		src += 2;
		dst += nskip;

		for (c = dst; c < dst + ncopy; c++) {
			unsigned int r = src[3 * c + 0];
			unsigned int g = src[3 * c + 1];
			unsigned int b = src[3 * c + 2];

			col[c].r = (r << 2) | (r >> 4);
			col[c].g = (g << 2) | (g >> 4);
			col[c].b = (b << 2) | (b >> 4);
		}

		SDL_SetPalette(s_surface, SDL_LOGPAL | SDL_PHYSPAL, col, dst, ncopy);

		src += 3 * ncopy;
		dst += ncopy;
	}
}

void
flip_video(void)
{
	SDL_Flip(s_surface);
}

void
wait_vblank(void)
{
}

long
get80hz(void)
{
	static unsigned int l_timer;
	unsigned int ticks = SDL_GetTicks();

	l_timer++;

	if (ticks < l_timer * 1000 / 80)
		SDL_Delay(l_timer * 1000 / 80 - ticks);

	return l_timer;
}
