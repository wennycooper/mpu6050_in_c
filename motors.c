#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <softPwm.h>

#define RANGE	100
#define INITIAL_VALUE 0
#define MIN_POWER  25

void init_motors()
{
  wiringPiSetup();

  // initialize left motor (pin0, 2 & 3)
  softPwmCreate(0, INITIAL_VALUE, RANGE);
  softPwmCreate(2, INITIAL_VALUE, RANGE);
  pinMode(3, OUTPUT);
  digitalWrite(3, HIGH);

  // initialize right motor (pin4, 5 & 6)
  softPwmCreate(5, INITIAL_VALUE, RANGE);
  softPwmCreate(4, INITIAL_VALUE, RANGE);
  pinMode(6, OUTPUT);
  digitalWrite(6, HIGH);
}

void stop_motors()
{
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  digitalWrite(0, LOW);
  digitalWrite(2, LOW);

  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);

  printf("motor stopped!!\n");

  exit(1);

}


void motors(double speed)
{

// to come to me, drive pin 0&5 to some power
// to leave   me, drive pin 2&4 to some power


  if (speed < 0)  {
    softPwmWrite(0, -speed);
    softPwmWrite(2, 0);
    softPwmWrite(5, -speed);
    softPwmWrite(4, 0);
  }
  else
  if (speed > 0)  {
    softPwmWrite(2, speed);
    softPwmWrite(0, 0);
    softPwmWrite(4, speed);
    softPwmWrite(5, 0);
  }
}



