/*  Multiple LED Example
*  
*   Operate multiple LED outputs. Use code to configure and toggle 4 external LEDs 
*
*   Board: NUCLEO L476RG
*   Author: Dr James H. Chandler, University of Leeds 2021  
*/

#include "mbed.h"

// Blinking rate in milliseconds
#define BLINKING_RATE     500ms

//define output pins
DigitalOut led1(PC_0);      // Create DigitalOut Object called led1 and assign pin PC_0
DigitalOut led2(PC_1);      // Create DigitalOut Object called led2 and assign pin PC_1

void init_leds();           // Declare led initialisation function 


int main()
{
init_leds();

    while (true) {
        
       led1 = !led1;    //Toggle the value of led1
       led2 = !led2;    //Toggle the value of led2
       ThisThread::sleep_for(BLINKING_RATE);   // Sleep for specified duration
    }
                
}

// initalisation function
void init_leds(){
    led1.write(1);
    led2.write(1);
}