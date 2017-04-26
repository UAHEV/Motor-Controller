// Motor_Controller_Mk_2.h
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

#include "Arduino.h"
//add your includes for the project Motor_Controller_Mk_2 here
#include "test/FastPWM.h"
#include "Wire.h"
#include "missingI2C.h"

//add your function definitions for the project Motor_Controller_Mk_2 here
void receiveEvent(int howMany);

// end /* _Motor_Controller_Mk_2_H_ */
