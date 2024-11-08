/*
 * timer.c
 *
 *  Created on: Nov 1, 2024
 *      Author: ADMIN
 */
#include "timer.h"
#include "button.h"

int counter0 = 0;
int counter1 = 0;
int counter2 = 0;
int counter3 = 0;

int flag0 = 0;
int flag1 = 0;
int flag2 = 0;
int flag3 = 0;



void setTimer0(int duration){
	counter0 = duration ;
	flag0 = 0;
}

void setTimer1(int duration){
	counter1 = duration ;
	flag1 = 0;
}

void setTimer2(int duration){
	counter2 = duration ;
	flag2 = 0;
}

void setTimer3(int duration){
	counter3 = duration ;
	flag3 = 0;
}

void timer_run(){

	if(counter0 > 0){
		counter0--;
		if(counter0 <= 0)	flag0 = 1;
	}

	if(counter1 > 0){
		counter1--;
		if(counter1 <= 0)	flag1 = 1;
	}

	if(counter2 > 0){
		counter2--;
		if(counter2 <= 0)	flag2 = 1;
	}

	if(counter3 > 0){
			counter3--;
			if(counter3 <= 0)	flag3 = 1;
		}

}

int getFlag0(){
	return flag0;
}

int getFlag1(){
	return flag1;
}

int getFlag2(){
	return flag2;
}

int getFlag3(){
	return flag3;
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
	timer_run();
	button_reading();
}


