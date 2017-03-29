// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef _Motor_Controller_Mk_2_H_
#define _Motor_Controller_Mk_2_H_
#include "Arduino.h"
//add your includes for the project Motor_Controller_Mk_2 here
#include "test/FastPWM.h"
#include "Wire.h"
#include "I2C_Anything.h"
#include "missingI2C.h"

void receiveData(int byteCount){

	while(Wire.available()) {

		String hex = (String) Wire.read();
		Serial.print("data received: ");
		Serial.println(hex);

//		if (number == 1){
//
//			if (state == 0){
//				digitalWrite(13, HIGH); // set the LED on
//				state = 1;
//			}
//			else{
//				digitalWrite(13, LOW); // set the LED off
//				state = 0;
//			}
//		}
	}

}

//add your function definitions for the project Motor_Controller_Mk_2 here
void receiveEvent(int howMany);



//Do not add code below this line
#endif /* _Motor_Controller_Mk_2_H_ */
