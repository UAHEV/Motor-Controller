// Motor_Controller_Mk_2.cpp
//
// Copyright 2017 UAH Electric Vehicle Club
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// 	http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/* -------------------------------------------------------------- */
// The second iteration of the UAHEV motor controller's software
// Reads a hex value off I2C, converts, and updates the PWM output
//
// Modified by Will Boyd using Drew Prevost's initial design. No 
// significant design changes were made.
/* -------------------------------------------------------------- */

#include "Motor_Controller_Mk_2.h"

//Define the pwm object
FastPWM pwm = FastPWM(5, 0, false, 0, 0, 100, 200, 5, 95);

//The setup function is called once at startup of the sketch
void setup() {
	
	Wire.begin(0x08);
	Wire.onReceive(receiveEvent);
	
	Serial.begin(9600);
	Serial.println("Controller Initialized...");
	
}

// The loop function is called in an endless loop
void loop() { }

void receiveEvent(int howMany) {

	// TODO: Investigate this
	// For some reason, reading in a
	// String object or a char array
	// feeding that directly into the
	// strol fcn causes strol to return
	// 0, even if the string is the
	// correct value. Thsi should always
	// work, since the data will never
	// me larger than 2 digits long

	int sentData = (int)readI2CHex(howMany);

	//Serial.print("Converted Value: ");
	//Serial.println(sentData);
	pwm.setVal(pwm.mapValue(sentData));
	
}
