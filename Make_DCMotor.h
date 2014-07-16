/* Copyright (C) 2014 by Victor Aprea <victor.aprea@wickeddevice.com>

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.  */

#ifndef _MAKE_DCMOTOR_H
#define _MAKE_DCMOTOR_H

#include <MakeMotorShield.h>
#include <stdint.h>

class Make_DCMotor : public MakeMotorShield{
 private:
   uint8_t get_motor_direction(void);  
   uint8_t motor_number;
 public:
   Make_DCMotor(uint8_t motor_number, uint8_t use_alternate_pins = 0);
   void setSpeed(uint8_t pwm_val);            // 0..255
   void setDirection(uint8_t direction);      // DIR_CCW, DIR_CW
   void setBrake(uint8_t brake_type);         // BRAKE_HARD, BRAKE_SOFT, BRAKE_OFF
   uint16_t currentSense(void);
};

#endif /* _MAKE_MOTOR_H */

