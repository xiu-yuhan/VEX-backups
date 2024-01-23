#include "main.h"
pros::Motor left1(11,pros::E_MOTOR_GEARSET_18,false,pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor left2(12,pros::E_MOTOR_GEARSET_18,false,pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor left3(13,pros::E_MOTOR_GEARSET_18,false,pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor left4(14,pros::E_MOTOR_GEARSET_18,false,pros::E_MOTOR_ENCODER_COUNTS);

pros::Motor right1(17,pros::E_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor right2(18,pros::E_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor right3(19,pros::E_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor right4(20,pros::E_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_COUNTS);

pros::Controller con(pros::E_CONTROLLER_MASTER);
pros::ADIMotor wings('B');
