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
	switch(mode){
		case 2:
			red_buffer++;
			if(red_buffer > 99)	red_buffer = 0;
			break;
		case 3:
			yellow_buffer++;
			if(yellow_buffer > 99) yellow_buffer = 0;
			break;
		case 4:
			green_buffer++;
			if(green_buffer > 99) green_buffer = 0;
			break;
		default:
			break;
	}

}

void setValue(){
	switch(mode){
		case 2:
			red_value = red_buffer;
			break;
		case 3:
			yellow_value = yellow_buffer;
			break;
		case 4:
			green_value = green_buffer;
			break;
		default:
			break;
	}

}

void uprateValue(){
	switch(buttonState[1]){
		case NORMAL:
			if(isButton2Pressed() == 1){
				buttonState[1] = PRESSED;
				uprateHoldValue();
			}
			if(isButtonHold()){
				buttonState[1] = HOLD;
				uprateHoldValue();
			}
			break;
		case PRESSED:
			if(!isButton2Pressed()){
				buttonState[1] = NORMAL;
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
