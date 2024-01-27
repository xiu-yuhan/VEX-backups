#include "main.h"

/**
 * A callback function for LLEMU's center button.
 *
 * When this callback is fired, it will toggle line 2 of the LCD text between
 * "I was pressed!" and nothing.
 */
void on_center_button() {
	static bool pressed = false;
	pressed = !pressed;
	if (pressed) {
		pros::lcd::set_text(2, "I was pressed!");
	} else {
		pros::lcd::clear_line(2);
	}
}

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() {
	pros::lcd::initialize();
	pros::lcd::set_text(1, "Hello PROS User!");

	pros::lcd::register_btn1_cb(on_center_button);
	left1.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
	left2.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
	left3.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
	left4.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
	right1.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
	right2.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
	right3.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
	right4.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);

}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {}

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void autonomous() {
	left1.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
	left2.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
	left3.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
	left4.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
	right1.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
	right2.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
	right3.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
	right4.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);

//defense side
/*
driveLeft(69);
pros::delay(460);
driveLeft(0);
pros::delay(100);
driveRight(50);
driveLeft(50);
pros::delay(1700); //too fast
driveRight(0);
driveLeft(0);
pros::delay(100);
driveRight(69);
pros::delay(490);
driveRight(0);
pros::delay(100);
driveLeft(100);
driveRight(100);
pros::delay(169);
driveLeft(0);
driveRight(0);
pros::delay(100);
driveLeft(-100);
driveRight(-100);
pros::delay(250);
driveLeft(0);
driveRight(0);
pros::delay(100);
driveLeft(100);
driveRight(-100);
pros::delay(625);
driveLeft(0);
driveRight(0);
pros::delay(100);
driveLeft(-100);
driveRight(-100);
pros::delay(269);
driveLeft(0);
driveRight(0);
pros::delay(100);
driveLeft(100);
pros::delay(790); //615 for perp
driveLeft(0);
pros::delay(100);
driveLeft(100);
driveRight(100);
pros::delay(1050);
driveLeft(0);
driveRight(0);
wings.set_value(127);
pros::delay(100);
driveLeft(40);
pros::delay(1300);
driveLeft(0);
pros::delay(100);
driveLeft(50);
driveRight(50);
pros::delay(700); //300 dis numba crossy crossy
driveLeft(0);
driveRight(0);
pros::delay(100);
driveLeft(40);
pros::delay(1800); //base 2350
driveLeft(-45);
pros::delay(200);
driveLeft(0);
pros::delay(200);
driveLeft(100);
driveRight(100);
pros::delay(550);
driveLeft(0);
driveRight(0);
pros::delay(100);
driveLeft(-100);
driveRight(-100);
pros::delay(450);
driveLeft(0);
driveRight(0);
*/
// offense side
driveRight(69);
pros::delay(470);
driveRight(0);
pros::delay(100);
driveRight(50);
driveLeft(50);
pros::delay(1800); //too fast
driveRight(0);
driveLeft(0);
pros::delay(100);
driveLeft(69);
pros::delay(480);
driveLeft(0);
pros::delay(100);
driveLeft(100);
driveRight(100);
pros::delay(169);
driveLeft(0);
driveRight(0);
pros::delay(100);
driveLeft(-100);
driveRight(-100);
pros::delay(200);
driveLeft(0);
driveRight(0);
pros::delay(100);
driveLeft(100);
driveRight(-100);
pros::delay(625);
driveLeft(0);
driveRight(0);
pros::delay(100);
driveLeft(-100);
driveRight(-100);
pros::delay(150);
driveLeft(0);
driveRight(0);
pros::delay(100);

driveRight(100);
pros::delay(790); //615 for perp
driveRight(0);
pros::delay(100);
driveLeft(100);
driveRight(100);
pros::delay(1050);
driveLeft(0);
driveRight(0);
wings.set_value(127);
pros::delay(100);
driveRight(100);
pros::delay(500);
driveRight(0);
pros::delay(100);
driveLeft(100);
driveRight(100);
pros::delay(200);
driveLeft(100);
driveRight(0);
pros::delay(650);
driveLeft(100);
driveRight(100);
pros::delay(300);
driveLeft(0);
driveRight(0);
wings.set_value(0);






}
/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
void opcontrol() {
	while (true)
	{
		doDaDrive();
		activateWings();
		pros::delay(20);
	}
}
