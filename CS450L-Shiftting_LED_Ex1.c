/*----------------------------------------------------------------------------------------------
File Name: CS450L-Shiftting_LED_Ex1.c
Author: Carlos Flores Valero,
Northwestern Polytechnic University, Fremont, CA
Date: 8/24/2013
Description: A program to blink one LED and shift back and forth among 8 LEDs.
--------------------------------------------------------------------------------------------*/
#include <reg52.h>
#include <intrins.h>
#define uint unsigned int
void delay(uint z){
	uint x,y;
	for(x=z; x>0; x--) for(y=415; y>0; y--);
}
//Special function register declarations //For calling _ crol_ function
//Define new data type for future use //Delay function declaration
//Run nested for loop to generate delay
void main (void) {
	uint goUp = 0;
	P1 = 0xFE;
	P2 = 0x7F;
	while (1) {
		if (goUp == 0){
			delay(200);
			P1 = _crol_(P1,1);
			P2 = _cror_(P1,1);
		}
		else{
			delay(200);
			P1 = _cror_(P1, 1);
		}
		if (P1 == 0xFE){
			goUp = 0;
		}
		if (P1 == 0x7E){
			goUp = 1;
		}
	}
}
