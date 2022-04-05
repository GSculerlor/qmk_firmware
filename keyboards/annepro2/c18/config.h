/*
 * Copyright (c) 2018 Charlie Waters
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "pin_defs.h"
#include "config_led.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xfeed
#define PRODUCT_ID 0xac18
#define DEVICE_VER 0x1337
#define MANUFACTURER Obins
#define PRODUCT Anne Pro 2(c18)QMK
// key matrix size
#define MATRIX_ROWS 5
#define MATRIX_COLS 14
// layer size: MATRIX_ROWS * MATRIX_COLS * sizeof(uint16_t) = 140 bytes

#define LINE_UART_TX B0
#define LINE_UART_RX B1

#define LINE_BT_UART_TX A4  // Master TX, BLE RX
#define LINE_BT_UART_RX A5  // Master RX, BLE TX

// outputs (rows are pulled low)
#define MATRIX_ROW_PINS \
    { B5, B4, B3, B2, D1 }

// inputs (columns are sampled)
#define MATRIX_COL_PINS \
    { C4, C5, D0, B15, C11, A15, C12, C13, A8, A10, A11, A14, D2, D3 }

// Obins stock firmware has something similar to this already enabled, but disabled by default in QMK
#define PERMISSIVE_HOLD

#define MK_3_SPEED
#define MOUSEKEY_DELAY 100
#define MOUSEKEY_INTERVAL 20
#define MOUSEKEY_MAX_SPEED 4
#define MOUSEKEY_TIME_TO_MAX 10
#define MOUSEKEY_WHEEL_MAX_SPEED 4
#define MOUSEKEY_WHEEL_TIME_TO_MAX 10
#define MK_C_OFFSET_0 4
#define MK_C_INTERVAL_0 30
#define MK_C_OFFSET_1 8
#define MK_C_INTERVAL_1 20
#define MK_C_OFFSET_2 16
#define MK_C_INTERVAL_2 20
#define MK_C_OFFSET_UNMOD 3
#define MK_C_INTERVAL_UNMOD 25
