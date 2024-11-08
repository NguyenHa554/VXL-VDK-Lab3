/*
 * ledDisplay.c
 *
 *  Created on: Nov 8, 2024
 *      Author: ADMIN
 */

#include "ledDisplay.h"

void display7SEG(int counter){
		  switch(counter){
		  	  case 0:
		  		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		  	    HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		  		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		  		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		  		  break;
		  	  case 1:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		  		  break;
		  	  case 2:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  		  break;
		  	  case 3:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin,RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  		  break;
		  	  case 4:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  		  break;
		  	  case 5:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  		  break;
		  	  case 6:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  		  break;
		  	  case 7:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		  		  break;
		  	  case 8:
				HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
				HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
				HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
				HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
				HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
				HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
				HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  		  break;
		  	  case 9:
					HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
					HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
					HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
					HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
					HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
					HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
					HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  		  break;
		  	  default:
		  		  break;

		  }
	  }


int counter = RED_VALUE;

void resetCountValue(){
	counter = red_value;
}

void updateMode(){
	if(isButton1Pressed() == 1){
		mode++;
		if(mode > 4){
			mode = 1;
			resetCountValue();
		}

	}
}



int getLed1Value(){
	switch(mode){
		case 1:
			return counter;
			break;
		case 2:
			return red_buffer;
			break;
		default:
			break;
	}
	return 0;
}

void normalMode(){
	HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, RESET);
	counter--;
	if(counter < 0) counter = RED_VALUE;
}

void ledDisplay(){
	switch(mode){
		case 1:
			if(getFlag0()){
				normalMode();
				setTimer0(100);
			}

			break;
		case 2:
			if(getFlag0()){
				HAL_GPIO_TogglePin(R1_GPIO_Port, R1_Pin);
				setTimer0(200);
			}
			break;
		default:
			break;
	}
}

void update7SEG(){
	static int scan = 0;
	switch(scan){
		case 0:
			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, RESET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			display7SEG(getLed1Value() / 10);
			scan = 1;
			break;
		case 1:
			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, RESET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			display7SEG(getLed1Value() % 10);
			scan = 2;
			break;
		case 2:
			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, SET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			display7SEG(mode);
			scan = 0;
			break;
		default:
			break;
	}
}
