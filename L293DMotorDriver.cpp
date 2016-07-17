#include "Arduino.h"
#include "L293DMotorDriver.h"

L293DMotorDriver::L293DMotorDriver(uint8_t pin_dir_1, uint8_t pin_dir_2, uint8_t pin_pwm_output)
{
	_pin_dir_1 = pin_dir_1;
	_pin_dir_2 = pin_dir_2;
	_pin_pwm_output = pin_pwm_output;

	//Direction and PWM output
	pinMode(_pin_dir_1, OUTPUT);
	pinMode(_pin_dir_2, OUTPUT);
	pinMode(_pin_pwm_output, OUTPUT);
}
	
void L293DMotorDriver::writePWM(int pwmSpeed)
{
	// Pick direction
	if (pwmSpeed < 0)
	{
		digitalWrite(_pin_dir_1, LOW);
		digitalWrite(_pin_dir_2, HIGH);
	}
	else
	{

		digitalWrite(_pin_dir_1, HIGH);
		digitalWrite(_pin_dir_2, LOW);
	}
		
	// set PWM output
	analogWrite(_pin_pwm_output, pwmSpeed);
}
