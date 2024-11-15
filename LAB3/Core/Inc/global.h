/*
 * global.h
 *
 *  Created on: Nov 8, 2024
 *      Author: ADMIN
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "timer.h"
#include "button.h"
#include "main.h"

#define RED_VALUE 9
#define YELLOW_VALUE 3
#define GREEN_VALUE 6

extern int mode;
extern int red_value, yellow_value, green_value;
extern int red_buffer, yellow_buffer, green_buffer;

#endif /* INC_GLOBAL_H_ */
