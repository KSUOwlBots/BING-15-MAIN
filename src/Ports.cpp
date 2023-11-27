#include "main.h"
#include "pros/adi.hpp"
#include "pros/motors.h"

//Extra Motor Ports
pros::Motor intake1(14, MOTOR_GEARSET_18);
pros::Motor intake2(4, MOTOR_GEARSET_18, true);
pros::Motor_Group intake({intake1, intake2});

pros::Motor cata1(5, MOTOR_GEARSET_36);
pros::Motor cata2(15, MOTOR_GEARSET_36, true);
pros::Motor_Group catapult({cata1, cata2});


//adi ports
pros::ADIDigitalIn cataLimitSwitch('H');

pros::ADIDigitalOut wings('A');