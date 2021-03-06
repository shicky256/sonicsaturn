#ifndef GRAPHICREFS_H
#define GRAPHICREFS_H


//---background tiles---


//---sprite graphics---
//font.c
#define GRAPHIC_FONT (0)
extern Uint16 font_num;
extern Uint16 font_size;
extern Uint16 font_width;
extern Uint16 font_height;
extern char font_name[];
extern Uint32 font_pal[];

#define GRAPHIC_SONIC (font_num)
extern Uint16 sonic_num;
extern Uint16 sonic_size;
extern Uint16 sonic_width;
extern Uint16 sonic_height;
extern char sonic_name[];
extern Uint32 sonic_pal[];
#endif
