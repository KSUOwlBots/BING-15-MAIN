#include "api.h"
#include "pros/adi.hpp"

//Extra Motor Ports


extern pros::Motor intake1;
extern pros::Motor intake2;
extern pros::Motor_Group intake;
extern pros::Motor cata1;
extern pros::Motor cata2;
extern pros::Motor_Group catapult;

//adi ports
extern pros::ADIDigitalIn cataLimitSwitch;
extern pros::ADIDigitalOut wings;