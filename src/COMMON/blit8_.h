#ifndef BLIT8_H
#define BLIT8_H

#include "jimk.h"

/* Function: a1blit
 *
 *  Blit from single bit-plane source to byte-a-pixel destination.
 *  1's in source are set to colour in destination.  0's in source
 *  have no effect on destination.  Used to implement menu icons,
 *  most text, and the cursor.
 *
 *  width - width of blit in pixels.
 *  height - height of blit in pixels.
 *  sx, sy - coordinates of upper left corner of source.
 *  src - pointer to source bit-plane.
 *  sstride - how many bytes from one line of source to next.
 *  dx, dy - coordinates of upper left corner of destination.
 *  dst - pointer to destination byte-plane.
 *  dstride - how many bytes from one line of destination to next.
 *  col - colour 1's in source are set to in destination.
 */
extern void
a1blit(int width, int height,
		int sx, int sy, const UBYTE *src, int sstride,
		int dx, int dy, UBYTE *dst, int dstride, int col);

/* Function: a2blit
 *
 *  Blit from single bit-plane source to byte-a-pixel destination.
 *  1's in source are set to foreground colour in destination.  0's in source
 *  are set to background colour in destination.  Used to implement text
 *  in string requestors and in places where one message writes over another.
 *
 *  width - width of blit in pixels.
 *  height - height of blit in pixels.
 *  sx, sy - coordinates of upper left corner of source.
 *  src - pointer to source bit-plane.
 *  sstride - how many bytes from one line of source to next.
 *  dx, dy - coordinates of upper left corner of destination.
 *  dst - pointer to destination byte-plane.
 *  dstride - how many bytes from one line of destination to next.
 *  fg - colour 1's in source are set to in destination.
 *  bg - colour 0's in source are set to in destination.
 */
extern void
a2blit(int width, int height,
		int sx, int sy, const UBYTE *src, int sstride,
		int dx, int dy, UBYTE *dst, int dstride, int fg, int bg);

/* Function: blit8
 *
 *  This blits from a byte-plane source to a byte-plane destination.
 *  It does not handle overlapping source and destination.  This is
 *  used all over the place: to save and restore what is under the
 *  cursor or under a menu, to paste the cel when key colour clear is
 *  turned off, etc.
 *
 *  width - width of blit in pixels.
 *  height - height of blit in pixels.
 *  sx, sy - coordinates of upper left corner of source.
 *  src - pointer to source byte-plane.
 *  sstride - how many bytes from one line of source to next.
 *  dx, dy - coordinates of upper left corner of destination.
 *  dst - pointer to destination byte-plane.
 *  dstride - how many bytes from one line of destination to next.
 */
extern void
blit8(int width, int height,
		int sx, int sy, const UBYTE *src, int sstride,
		int dx, int dy, UBYTE *dst, int dstride);

#ifndef SLUFF

#define cdraw_brush(brush, x, y, col) \
	a1blit(16, 16, 0, 0, brush, 2, (x)-8, (y)-8, vf.p, vf.bpr, col)

#define draw_brush(brush, x, y, col) \
	a1blit(16, 16, 0, 0, brush, 2, x, y, vf.p, vf.bpr, col)

#endif /* SLUFF */

#endif
