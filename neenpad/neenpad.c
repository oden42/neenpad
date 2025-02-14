#include "neenpad.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = {
    /* Key Matrix to LED Index (matches the keymap matrix) */
    {
        /* Row 0..3 */
        {NO_LED,1,	2, 	3, 	4}, // Row 0
        {NO_LED,8,	7,	6,	NO_LED}, // Row 1
        {NO_LED,11,	10,	9,	5}, // Row 2
        {16,	15,	14,	13,	12}, // Row 3
		{19,	18,	NO_LED,	17,	NO_LED} // Row 4
    },
    /* LED Index to Physical Position (follows the order of the LED chain) */
    {
        /* Matrix */
        {55, 0}, {110, 0}, {165, 0}, {220, 0},
		{220, 32}, {165, 16}, {110, 16},
		{55, 16}, {165, 32}, {110, 32}, {55, 32},
		{220, 48}, {165, 48}, {110, 48}, {55, 48}, {0, 48},
		{165, 64}, {55, 64}, {0, 64},
        /* Underglow */
		{30,0}, {190,0}, {224,32}, {224,56}, {190,64}, {30,64}, {0,56}, {0,32}, 
    },
    /* LED Index to Flag */
    {
        /* Matrix */
        4, 4, 4, 4,
        4, 4, 4,
        4, 4, 4, 4,
		4, 4, 4, 4, 4,
        4, 4, 4,
        /* Underglow */
        2, 2, 2, 2, 2, 2, 2, 2,
    }
};
#endif /* RGB_MATRIX_ENABLE */

			/* 5x5 Matrix */
/*
NO_LED	(1)		(2)		(3)		(4)
0,0		55,0	110,0	165,0	220,0

NO_LED	(8)		(7)		(6)		NO_LED
0,16	55,16	110,16	165,16	220,16

NO_LED	(11)	(10)	(9)		(5)
0,32	55,32	110,32	165,32	220,32

(16)	(15)	(14)	(13)	(12)
0,48	55,48	110,48	165,48	220,48

(19)	(18)	NO_LED	(17)	NO_LED
0,64	55,64	110,64	165,64	220,64
*/