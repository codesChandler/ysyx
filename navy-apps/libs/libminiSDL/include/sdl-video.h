#ifndef __SDL_VIDEO_H__
#define __SDL_VIDEO_H__

#define SDL_HWSURFACE 0x1
#define SDL_PHYSPAL 0x2
#define SDL_LOGPAL 0x4
#define SDL_SWSURFACE  0x8
#define SDL_PREALLOC  0x10
#define SDL_FULLSCREEN 0x20
#define SDL_RESIZABLE  0x40

#define DEFAULT_RMASK 0x00ff0000
#define DEFAULT_GMASK 0x0000ff00
#define DEFAULT_BMASK 0x000000ff
#define DEFAULT_AMASK 0xff000000

typedef union {
  struct {
    uint8_t r, g, b, a;
  };
  uint32_t val;
} SDL_Color;//A structure that represents a color.

typedef struct {
	int ncolors;//the number of colors in the palette
	SDL_Color *colors;//an array of SDL_Color structures representing the palette!!!这里才有数组
} SDL_Palette;

typedef struct {
	SDL_Palette *palette;//	an SDL_Palette structure associated with this pixel format, or NULL if the format doesn't have a palette
	uint8_t BitsPerPixel;//the number of significant bits in a pixel value, eg: 8, 15, 16, 24, 32
	uint8_t BytesPerPixel;//the number of bytes required to hold a pixel value, eg: 1, 2, 3, 4; see Remarks for related data type
	uint8_t Rloss, Gloss, Bloss, Aloss;//(internal use)
	uint8_t Rshift, Gshift, Bshift, Ashift;//(internal use)
	uint32_t Rmask, Gmask, Bmask, Amask;//a mask representing the location of the red/green/blue/alpha component of the pixel
} SDL_PixelFormat;


/**
 * A rectangle, with the origin at the upper left (integer).
 *
 * \sa SDL_RectEmpty
 * \sa SDL_RectEquals
 * \sa SDL_HasIntersection
 * \sa SDL_IntersectRect
 * \sa SDL_IntersectRectAndLine
 * \sa SDL_UnionRect
 * \sa SDL_EnclosePoints
 */
typedef struct {
	int16_t x, y;//the x location of the rectangle's upper left corner;the y location of the rectangle's upper left corner
	uint16_t w, h;//the width of the rectangle;the height of the rectangle
} SDL_Rect;

/**
 * \brief A collection of pixels used in software blitting.
 *
 * \note  This structure should be treated as read-only, except for \c pixels,
 *        which, if not NULL, contains the raw pixel data for the surface.
 */
typedef struct {
	uint32_t flags;//(internal use)
	SDL_PixelFormat *format; //the format of the pixels stored in the surface; see SDL_PixelFormat for details (read-only)
	int w, h; //the width and height in pixels (read-only)
	uint16_t pitch; //the length of a row of pixels in bytes (read-only)
	uint8_t *pixels; //the pointer to the actual pixel data; see Remarks for details (read-write)
} SDL_Surface;


SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask);
SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask);
SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags);
void SDL_FreeSurface(SDL_Surface *s);
void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect);
void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color);
void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h);
void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect);
void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors);
SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags);
uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a);
int SDL_LockSurface(SDL_Surface *s);
void SDL_UnlockSurface(SDL_Surface *s);

#endif
