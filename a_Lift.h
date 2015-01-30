#ifndef Lift_h
#define Lift_h

#include <Arduino.h>
#include "a_Robot.h"
#include "PID_v1.h"

class Lift 
{
  public:  
    // CONSTRUCTORS
    Lift(Robot *p); // Default pin selection.

    void Task();

    float ControllerSpeed;
   
  private:
  	Robot *robot;

  	//LiftPID
    double liftCurPos = 0;
    double liftSetPoint = 0;
    double liftPIDOut = 0;
    bool liftPIDEnable = false;
    const int liftPIDTolerence = 5;
    const double liftKP = 1;
    const double liftKI = 1;
    const double liftKD = 1;

    PID liftPID;

    //Right PID
    double rightCurPos = 0;
    double rightSetPoint = 0;
    double rightPIDOut = 0;
    bool rightPIDEnable = false;
    const int rightPIDTolerence = 5;
    const double rightKP = 1;
    const double rightKI = 1;
    const double rightKD = 1;

    PID rightPID;
    
};

#endif