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

enum LedState{RED, YELLOW, GREEN};

enum LedState state = RED;
enum LedState state2 = GREEN;

int counter = RED_VALUE;
int count2 = GREEN_VALUE;

void resetCountValue(){
	counter = red_value;
	count2 = green_value;
	state2 = GREEN;
	state = RED;
}





int getLed1Value(){
	switch(mode){
		case 1:
			return counter;
			break;
		case 2:
			return red_buffer;
			break;
		case 3:
			return yellow_buffer;
		case 4:
			return green_buffer;
		default:
			break;
	}
	return 0;
}

int getLed2Value(){
	switch(mode){
		case 1:
			return count2;
			break;
		case 2:
			return red_buffer;
			break;
		case 3:
			return yellow_buffer;
		case 4:
			return green_buffer;
		default:
			break;
	}
	return 0;
}

void fsm_automatic(){
	counter--;
	count2--;
	switch(state){
		case RED:
			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, RESET);
			HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, SET);
			HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET);
			if(counter < 0){
				counter = green_value - 1;
				state = GREEN;
				HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
				HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, SET);
				HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, RESET);
			}
			break;
		case YELLOW:
			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
			HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, RESET);
			HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET);
			if(counter < 0){
				counter = red_value - 1;
				state = RED;
				HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, RESET);
				HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, SET);
				HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET);
			}
			break;
		case GREEN:
			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
			HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, SET);
			HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, RESET);
			if(counter < 0){
				counter = yellow_value - 1;
				state = YELLOW;
				HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
				HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, RESET);
				HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET);
			}
			break;
		default:
			break;
	}

	switch(state2){
		case RED:
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, RESET);
			HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, SET);
			HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, SET);
			if(count2 < 0){
				count2 = green_value - 1;
				state2 = GREEN;
				HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
				HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, SET);
				HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, RESET);
			}
			break;
		case YELLOW:
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
			HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, RESET);
			HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, SET);
			if(count2 < 0){
				count2 = red_value - 1;
				state2 = RED;
				HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, RESET);
				HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, SET);
				HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, SET);
			}
			break;
		case GREEN:
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
			HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, SET);
			HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, RESET);
			if(count2 < 0){
				count2 = yellow_value - 1;
				state2 = YELLOW;
				HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
				HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, RESET);
				HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, SET);
			}
			break;
		default:
			break;
	}
}

//void taskMode1(){
//	normalMode();
//}

//void taskMode2(){
//	HAL_GPIO_TogglePin(R1_GPIO_Port, R1_Pin);
//	HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, SET);
//	HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET);
//	HAL_GPIO_TogglePin(R2_GPIO_Port, R2_Pin);
//	HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, SET);
//	HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, SET);
//}
//
//void taskMode3(){
//	HAL_GPIO_TogglePin(Y1_GPIO_Port, Y1_Pin);
//	HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
//	HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET);
//	HAL_GPIO_TogglePin(Y2_GPIO_Port, Y2_Pin);
//	HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
//	HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, SET);
//}
//
//void taskMode4(){
//	HAL_GPIO_TogglePin(G1_GPIO_Port, G1_Pin);
//	HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, SET);
//	HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
//	HAL_GPIO_TogglePin(G2_GPIO_Port, G2_Pin);
//	HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, SET);
//	HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
//}
//
//void modeManager(){
//
//	switch(mode){
//		case 1:
//			SCH_Add_Task(taskMode1, 0, 100);
//			break;
//		case 2:
//			SCH_Add_Task(taskMode2, 0, 200);
//			break;
//		case 3:
//			SCH_Add_Task(taskMode3, 0, 200);
//			break;
//		case 4:
//			SCH_Add_Task(taskMode4, 0, 200);
//			break;
//		default:
//			break;
//	}
//}

//void ledDisplay(){
//	switch(mode){
//		case 1:
//			if(getFlag0()){
//				normalMode();
//				setTimer0(100);
//			}
//
//			break;
//		case 2:
//			if(getFlag0()){
//				HAL_GPIO_TogglePin(R1_GPIO_Port, R1_Pin);
//				HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, SET);
//				HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET);
//				HAL_GPIO_TogglePin(R2_GPIO_Port, R2_Pin);
//				HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, SET);
//				HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, SET);
//				setTimer0(200);
//			}
//			break;
//		case 3:
//			if(getFlag0()){
//				HAL_GPIO_TogglePin(Y1_GPIO_Port, Y1_Pin);
//				HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
//				HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET);
//				HAL_GPIO_TogglePin(Y2_GPIO_Port, Y2_Pin);
//				HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
//				HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, SET);
//				setTimer0(200);
//			}
//			break;
//		case 4:
//			if(getFlag0()){
//				HAL_GPIO_TogglePin(G1_GPIO_Port, G1_Pin);
//				HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, SET);
//				HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
//				HAL_GPIO_TogglePin(G2_GPIO_Port, G2_Pin);
//				HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, SET);
//				HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
//				setTimer0(200);
//			}
//			break;
//		default:
//			break;
//	}
//}

void fsm_settings(){
	static int scan = 0;
	switch(scan){
		case 0:
			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, RESET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN3_Pin, RESET);
			display7SEG(getLed1Value() / 10);
			scan = 1;
			break;
		case 1:
			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, RESET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN3_Pin, RESET);
			display7SEG(getLed1Value() % 10);
			scan = 2;
			break;
		case 2:
			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, RESET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN3_Pin, RESET);
			display7SEG(getLed2Value() / 10);
			scan = 3;
			break;
		case 3:
			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, RESET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN3_Pin, SET);
			display7SEG(getLed2Value() % 10);
			scan = 4;
			break;

		case 4:
			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, SET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN3_Pin, RESET);
			display7SEG(mode);
			scan = 0;
			break;
		default:
			break;
	}
}
