#include "main.h"

void Intake_Control(void *)
{
  bool hopperFull = false;
  double hopperVal = 90;
  
  while (true)
  {
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R1))
    {
      intake.move_velocity(600);
    }
    
    else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R2))
    {
      intake.move_velocity(-600);

    }
    else
    {
      intake.move_velocity(0);
    }

    pros::delay(20);
  }   
}



void Intake_Auto(int x) {
    intake.move_velocity(x);
    
}

void wingsActuate(void *)
{
  bool wingsActive = false;
  while(true)
  {
    if ((master.get_digital(pros::E_CONTROLLER_DIGITAL_L2)))
    {
      wingsActive = !wingsActive;
      wings.set_value(wingsActive);
      pros::delay(250);
    }


    pros::delay(20);
  }
}

void wingsAuto(bool x)
{
  wings.set_value(x);
}
