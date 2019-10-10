/*----------------------------------------------------------------------------------------------
File Name: CS450L-Shiftting_LED_Ex2.c
Author: Carlos Flores Valero,
Northwestern Polytechnic University, Fremont, CA
Date: 09/30/2019
Description: Program that make 2 LEDs at the two ends of 8 LEDs on the board
             blink and move in different directions and back.
--------------------------------------------------------------------------------------------*/
#include <reg52.h>
#include <intrins.h>
#define uint unsigned int
void delay(uint z){
	uint x,y;
	for(x=z; x>0; x--) for(y=415; y>0; y--);
}

void main(void){
  P1 = 0x7E;
  delay(200);
  P1 = 0xBD;
  delay(200);
  P1 = 0xDB;
  delay(200);
  P1 = 0xE7;
  delay(200);
  P1 = 0xDB;
  delay(200);
  P1 = 0xBD;
  delay(200);
  P1 = 0x7E;
  delay(200);
}
