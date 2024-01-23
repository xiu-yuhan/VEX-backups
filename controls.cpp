#include "main.h"

void activateWings()
{
    if(con.get_digital(pros::E_CONTROLLER_DIGITAL_R1))
    {
        wings.set_value(127);
    }

    if(con.get_digital(pros::E_CONTROLLER_DIGITAL_L1))
    {
        wings.set_value(0);
    }
}

void doDaDrive()
{
    if(con.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y) >0)
    {
        left1.move_velocity(127);
    }


}