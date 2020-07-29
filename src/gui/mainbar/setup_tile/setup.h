/****************************************************************************
 *   Tu May 22 21:23:51 2020
 *   Copyright  2020  Dirk Brosswick
 *   Email: dirk.brosswick@googlemail.com
 ****************************************************************************/
 
/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
#ifndef _SETUP_H
    #define _SETUP_H

    #include <TTGO.h>

    #define MAX_SETUP_ICON_HORZ       3
    #define MAX_SETUP_ICON_VERT       2
    #define MAX_SETUP_ICON            ( MAX_SETUP_ICON_HORZ * MAX_SETUP_ICON_VERT )

    #define SETUP_ICON_X_SIZE         64
    #define SETUP_ICON_Y_SIZE         64
    #define SETUP_ICON_X_CLEARENCE    8
    #define SETUP_ICON_Y_CLEARENCE    16
    #define SETUP_LABEL_X_SIZE        SETUP_ICON_X_SIZE + SETUP_ICON_X_CLEARENCE
    #define SETUP_LABEL_Y_SIZE        SETUP_ICON_Y_CLEARENCE / 2

    #define SETUP_FIRST_X_POS         ( 240 - ( SETUP_ICON_X_SIZE * MAX_SETUP_ICON_HORZ + SETUP_ICON_X_CLEARENCE * ( MAX_SETUP_ICON_HORZ - 1 ) ) ) / 2
    #define SETUP_FIRST_Y_POS         ( 240 - ( SETUP_ICON_Y_SIZE * MAX_SETUP_ICON_VERT + SETUP_ICON_Y_CLEARENCE * ( MAX_SETUP_ICON_VERT - 1 ) ) ) / 2

    typedef struct {
        lv_obj_t *setup;
        lv_obj_t *label;
        lv_coord_t x;
        lv_coord_t y;
        bool active;
    } lv_setup_entry_t;

    /*
     * @brief setup the setup tile
     * 
     * @param   tile    pointer to the tile obj
     * @param   style   pointer to the style obj
     * @param   hres    horizonal resolution
     * @param   vres    vertical resolution
     */
    void setup_tile_setup( void );
    lv_obj_t *setup_tile_register_setup( void );
    uint32_t setup_get_tile_num( void );

#endif // _SETUP_H