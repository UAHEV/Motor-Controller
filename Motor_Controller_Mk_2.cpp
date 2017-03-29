// Do not remove the include below
#include "Motor_Controller_Mk_2.h"
#include <string.h>
#include <stdlib.h>

//Define the pwm object
FastPWM pwm = FastPWM(5, 0, false, 0, 0, 100, 200, 5, 95);

//The setup function is called once at startup of the sketch
void setup()
{
	//	pwm.pin = 5;
	//	pwm.state = 0;
	//	pwm.initialized = false;
	//	pwmInit();

	Serial.begin(9600);
	Serial.println("Serial Initialized...");

	Wire.begin(0x08);
	Wire.onReceive(receiveEvent);


}

// The loop function is called in an endless loop
void loop() { }

void receiveEvent(int howMany) {

//	char data[howMany];
//
//	Serial.println("----------");
//
//	for (int i = 0; i < howMany; i++)
//	{
//		char b = Wire.read();
//
//		data[i] = b;
//
//		Serial.println(b);
//
//	}  // end of for loop
//
//	Serial.println("----------");
//
//	//add the null 0
//	data[howMany] = '\0';
//
//
//
//
//
//	Serial.print("Recieved ");
//	Serial.print(data[0]);
//	Serial.print(data[1]);
//	Serial.print(data[2]);
//	Serial.print(data[3]);
//	Serial.print(data[4]);
//	Serial.println();
//
//
//	// TODO: Investigate this
//	// For some reason, reading in a
//	// String object or a char array
//	// feeding that directly into the
//	// strol fcn causes strol to return
//	// 0, even if the string is the
//	// correct value. Thsi should always
//	// work, since the data will never
//	// me larger than 2 digits long
//	String conversion = "";
//	conversion += data[3];
//	//if (strlen(data) > 4) {
//
//		conversion += data[4];
//
//	//}
//	//	for (int i = 3; i < strlen(data); i++) {
//	//
//	//		conversion += data[i];
//	//		Serial.print("Appending ");
//	//		Serial.println(data[i]);
//	//
//	//	}
//
//	Serial.println("New Value: ");
//	Serial.println(conversion);
//
//	long convertedValue = strtol(conversion.c_str(), NULL, 16);

	int sentData = (int)readI2CHex(howMany);

	Serial.print("Converted Value: ");
	Serial.println(sentData);
	pwm.setVal(pwm.mapValue(sentData));




	//
	//
	//	char hex[100];
	//	int counter = 0;
	//
	////	while(Wire.available()) {
	////
	////		char data;
	////
	////		data = (char) Wire.read();
	////
	////		Serial.print("Letter: ");
	////		Serial.println(data);
	////
	////		hex[counter] = data;
	////		counter++;
	////
	////	}
	//
	////	char t[10] = {'\0'};
	//
	//	String hexData = "";
	//
	//	int i=0; //counter for each bite as it arrives
	//	  while (Wire.available()) {
	//	    hexData.concat((char)Wire.read()); // every character that arrives it put in order in the empty array "t"
	//	    i=i+1;
	//	  }
	//
	////	hex[counter] = '\n';
	//
	////	Serial.println(hex);
	//
	//	Serial.print("Recieved ");
	//	Serial.println(hexData);
	//	Serial.println("----------");
	//	long result = strtol(hexData.c_str(), NULL, 16);
	//	Serial.println(result);
	////	const char newData[] = "0x64";
	////	Serial.println(strtol(newData, NULL, 16));
	//
	////	Serial.print("Mapped data to ");
	////	Serial.println(pwm.mapValue(hex.toInt()));
	////
	////	pwm.setVal(pwm.mapValue(hex.toInt()));
	//
	//
	//
	//
	////	String data = "";
	////
	////	while (Wire.available()) {
	////
	////		char buffer = (char)Wire.read();
	////
	////		data += buffer;
	////
	////	}
	////
	////	int value = strtol(data.c_str(), NULL, 16);
	////
	////	Serial.println(value);
	//
	//
	////	int value = 0;
	////
	////	if ((unsigned int) howMany >= (sizeof value)) {
	////
	////		I2C_readAnything (value);
	////
	////		pwm.setVal(pwm.mapValue(value));
	////
	////		Serial.println("Received Data");
	////		Serial.println(value);
	////
	////	}

}
