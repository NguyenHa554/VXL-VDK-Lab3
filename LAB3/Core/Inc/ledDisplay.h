/*
 * ledDisplay.h
 *
 *  Created on: Nov 8, 2024
 *      Author: ADMIN
 */

#ifndef INC_LEDDISPLAY_H_
#define INC_LEDDISPLAY_H_

#include "global.h"

void updateMode();



void resetCountValue();
void display7SEG(int counter);
void ledDisplay();
void update7SEG();

#endif /* INC_LEDDISPLAY_H_ */
