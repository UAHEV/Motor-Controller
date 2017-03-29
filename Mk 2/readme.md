# Motor Controller Mk 2

This is the first motor controller written by UAHEV, forked from the project by Drew Prevost. It recieves data (encoded as hexadecimal strings) over I2C using [Wire](https://www.arduino.cc/en/reference/wire "Wire") and [missingI2C](https://github.com/UAHEV/missingI2C "missingI2C"), then manipulates the PWM register with a simple [FastPWM](https://github.com/UAHEV/FastPWM "FastPWM") object. It is designed to run on an Atmega 328 or 328p. 

# Dependencies
- `FastPWM`
- `Wire`
- `missingI2C`
- `Arduino Libraries`
