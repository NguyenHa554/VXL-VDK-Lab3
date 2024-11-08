/*
 * fsm_manual.c
 *
 *  Created on: Nov 8, 2024
 *      Author: ADMIN
 */

#include "fsm_manual.h"

enum ButtonState{NORMAL, PRESSED, HOLD};
enum ButtonState buttonState[3] = {NORMAL};


void uprateHoldValue(){
	if(mode == 2){
		red_buffer++;
		if(red_buffer > 99)	red_buffer = 0;
	}
}

void setValue(){
	if(mode == 2){
		red_value = red_buffer;
	}
}

void uprateValue(){
	switch(buttonState[1]){
		case NORMAL:
			if(isButton2Pressed() == 1){
				buttonState[1] = PRESSED;
				uprateHoldValue();
			}
			break;
		case PRESSED:
			if(!isButton2Pressed()){
				buttonState[1] = NORMAL;
			}

			if(isButtonHold()){
				buttonState[1] = HOLD;
				uprateHoldValue();
			}
			break;
		case HOLD:
			if(!isButtonHold()){
				buttonState[1] = NORMAL;
			}
			break;
		default:
			break;
	}

	switch(buttonState[2]){
		case NORMAL:
			if(isButton3Pressed() == 1){
				buttonState[2] = PRESSED;
				//TODO
				setValue();
			}
			break;
		case PRESSED:
			if(!isButton3Pressed()){
				buttonState[2] = NORMAL;
			}
			break;
		default:
			break;
	}

}
