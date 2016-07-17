#ifndef L293DMotorDriver_h
#define L293DMotorDriver_h

#include "Arduino.h"
#include <MotorDriver.h>

class L293DMotorDriver : public MotorDriver
{
	public:
		L293DMotorDriver(uint8_t pin_dir_1 = 4, uint8_t pin_dir_2 = 5, uint8_t pin_pwm_output = 6);
		void writePWM(int pwmSpeed);
		
	private:	
		uint8_t _pin_dir_1, _pin_dir_2, _pin_pwm_output;
};
#endif

