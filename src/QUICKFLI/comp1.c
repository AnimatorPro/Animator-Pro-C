/* comp1.c */

#include <string.h>
#include "comp1.h"

void
unlccomp(const UBYTE *src, UBYTE *dst)
{
	UBYTE *lineptr;
	unsigned int linect;

	lineptr = dst + WIDTH * ((const UWORD *)src)[0];
	src += 2;

	linect = ((const UWORD *)src)[0];
	src += 2;

	for (; linect > 0; linect--) {
		int lineopcount = *src++;
		dst = lineptr;

		for (; lineopcount > 0; lineopcount--) {
			int nskip = *src++;
			int length = (BYTE) *src++;

			dst += nskip;

			if (length >= 0) {
				memcpy(dst, src, length);
				src += length;
				dst += length;
			}
			else {
				length = -length;
				memset(dst, *src, length);
				src++;
				dst += length;
			}
		}

		lineptr += WIDTH;
	}
}

void
fcuncomp(const UBYTE *src, UBYTE *dst)
{
	unsigned int count = ((const UWORD *)src)[0];
	src += 2;

	for (; count > 0; count--) {
		int nskip = src[0];
		int ncopy = src[1];

		if (ncopy == 0)
			ncopy = 256;

		src += 2;
		dst += 3 * nskip;

		memcpy(dst, src, 3 * ncopy);

		src += 3 * ncopy;
		dst += 3 * ncopy;
	}
}
