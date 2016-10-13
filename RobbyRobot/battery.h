//
// Created by Mary Huerta on 10/5/16.
//

#ifndef ROBBYROBOT_BATTERY_H
#define ROBBYROBOT_BATTERY_H

#include "ComponetType.h"
#include "robotpart.h"
#include <string.h>


class Battery: public RobotPart {
public:
    Battery(int b_energy,
            int b_maxPower,
            string rp_name,
            int rp_partNumber,
            ComponetType rp_componentType, //
            double rp_weight,
            double rp_cost,
            string rp_description
    ):

            energy(b_energy),
            maxPower(b_maxPower),

            RobotPart(rp_name ,
                      rp_partNumber,
                      rp_componentType, //
                      rp_weight,
                      rp_cost,
                      rp_description) {}

// Getters
    int getEnergy() const { return energy; }
    int getMaxPower() const { return maxPower;}

protected:
    int energy;
    int maxPower;


};

#endif //ROBBYROBOT_BATTERY_H
