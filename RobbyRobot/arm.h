//
// Created by Mary Huerta on 10/5/16.
//

#ifndef ROBBYROBOT_ARM_H
#define ROBBYROBOT_ARM_H
#include "ComponetType.h"
#include "robotpart.h"
#include <string>


class Arm : public RobotPart {
public:
    Arm(int b_energy,
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
protected:
    int energy;
    int maxPower;




};
#endif //ROBBYROBOT_ARM_H
