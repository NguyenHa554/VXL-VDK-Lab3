/*
 * button.c
 *
 *  Created on: Nov 8, 2024
 *      Author: ADMIN
 */

#include "button.h"
#include "main.h"

int keyReg0[3] = {NORMAL_STATE,NORMAL_STATE, NORMAL_STATE };
int keyReg1[3] = {NORMAL_STATE,NORMAL_STATE, NORMAL_STATE };
int keyReg2[3] = {NORMAL_STATE,NORMAL_STATE, NORMAL_STATE };
int keyReg3[3] = {NORMAL_STATE,NORMAL_STATE, NORMAL_STATE };

int button1_flag[3] = {0, 0, 0} ;

int hold_counter[3] = {0, 0, 0};



int isButton1Pressed(){
	if(button1_flag[0] == 1){
		button1_flag[0] = 0;
		return 1;
	}
	return 0;
}

int isButton2Pressed(){
	if(button1_flag[1] == 1){
			button1_flag[1] = 0;
			return 1;
		}
		return 0;
}

int isButton3Pressed(){
	if(button1_flag[2] == 1){
			button1_flag[2] = 0;
			return 1;
		}
		return 0;
}

int isButtonHold(){
	if(hold_counter[1] >= 50)
		return 1;
	return 0;
}

int timeKeyReg[3] = {200, 200, 200};


void button_reading(){
	keyReg0[0] = keyReg1[0];
	keyReg1[0] = keyReg2[0];
	keyReg2[0] = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
	keyReg0[1] = keyReg1[1];
	keyReg1[1] = keyReg2[1];
	keyReg2[1] = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
	keyReg0[2] = keyReg1[2];
	keyReg1[2] = keyReg2[2];
	keyReg2[2] = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);

	for(int i = 0; i < 3; i++){
		if(keyReg0[i] == keyReg1[i] && keyReg1[i] == keyReg2[i]){
			if(keyReg3[i] != keyReg2[i]){
				keyReg3[i] = keyReg2[i];
				if(keyReg3[i] == PRESSED_STATE){
					button1_flag[i] = 1;
					timeKeyReg[i] = 200;
					hold_counter[i] = 0;
				}
			}
			else{
				timeKeyReg[i]--;
				if(timeKeyReg[i] == 0){
					keyReg3[i] = NORMAL_STATE;
				}
				if(i == 1 && keyReg3[i] == PRESSED_STATE){
					hold_counter[i]++;
				}
			}
		}
	}
}


