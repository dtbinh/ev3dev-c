
/*  ev3_light.h was generated by yup.py (yupp) 0.7b5
    out of ev3_light.yu-h at 2014-09-24 15:04
 *//**
 *  \file  ev3_light.h (ev3_light.yu-h)
 *  \brief  EV3 lights (green and red LEDs at once).
 *  \author  Vitaly Kravtsov (in4lio@gmail.com)
 *  \copyright  See the LICENSE file.
 */

#ifndef EV3_LIGHT_H
#define EV3_LIGHT_H

#ifdef  EV3_LIGHT_IMPLEMENT
#define EV3_LIGHT_EXT
#define EV3_LIGHT_EXT_INIT( dec, init ) \
	dec = init
#else
#define EV3_LIGHT_EXT extern
#define EV3_LIGHT_EXT_INIT( dec, init ) \
	extern dec
#endif

#ifndef COMMA
#define COMMA   ,
#endif

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 *  \defgroup ev3_light EV3 lights
 *  \{
 */

enum {
	LIT_LEFT,
	LIT_RIGHT,

	LIT__LOC__
};

enum {
	LIT_OFF,
	LIT_GREEN,
	LIT_RED,
	LIT_AMBER,

	LIT__COL__
};

EV3_LIGHT_EXT_INIT( const char * const LIT_COLOR[], { "OFF" COMMA  "GREEN" COMMA  "RED" COMMA  "AMBER" COMMA  "<unknown>" } );

EV3_LIGHT_EXT void set_light( uint8_t loc, uint8_t col );
EV3_LIGHT_EXT uint8_t get_light( uint8_t loc );

EV3_LIGHT_EXT void set_light_trigger( uint8_t loc, uint8_t col, uint8_t trigger );
EV3_LIGHT_EXT uint8_t get_light_trigger( uint8_t loc, uint8_t col );

EV3_LIGHT_EXT bool set_light_blink( uint8_t loc, uint8_t col, int delay_on, int delay_off );
EV3_LIGHT_EXT bool get_light_blink( uint8_t loc, uint8_t col );

/** \} */

#ifdef __cplusplus
}
#endif

#endif
