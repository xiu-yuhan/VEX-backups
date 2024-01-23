#include "main.h"

void activateWings()
{
    if(con.get_digital(pros::E_CONTROLLER_DIGITAL_R1) | con.get_digital(pros::E_CONTROLLER_DIGITAL_R2))
    {
        wings.set_value(127);
    }

    if(con.get_digital(pros::E_CONTROLLER_DIGITAL_L1) | con.get_digital(pros::E_CONTROLLER_DIGITAL_L2))
    {
        wings.set_value(0);
    }
}

void driveLeft(int lPower)
{
    left1.move(lPower);
    left2.move(lPower);
    left3.move(lPower);
    left4.move(lPower);
    
}

void driveRight(int rPower)
{
    right1.move(rPower);
    right2.move(rPower);
    right3.move(rPower);
    right4.move(rPower);
}
void doDaDrive()
{
    //control setup
    /*
    driveLeft(con.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y));
    driveRight(con.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y));
    */


    //flicker setup
    //tolerance is to counter joystick recoil from flicking
    int tolerance = 20;
    if(con.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y) > tolerance | con.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y) < (tolerance * -1))
    {
        driveLeft(con.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y));
    }

    else
    {
        driveLeft(0);
    }

    if(con.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y) > tolerance | con.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y) < (tolerance * -1))
    {
        driveRight(con.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y));
    }

    else
    {
        driveRight(0);
    }

    
    


}