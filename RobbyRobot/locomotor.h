//
// Created by Mary Huerta on 10/5/16.
//

#ifndef ROBBYROBOT_LOCOMOTOR_H
#define ROBBYROBOT_LOCOMOTOR_H

#include "RobotPart.h"

class Locomotor : public RobotPart {
public:
    Locomotor(int l_maxSpeed,
              string rp_name,
              int rp_partNumber,
              ComponetType rp_componentType, //
              double rp_weight,
              double rp_cost,
              string rp_description
    ):

            maxSpeed(l_maxSpeed),

            RobotPart(rp_name,
                      rp_partNumber,
                      rp_componentType, //
                      rp_weight,
                      rp_cost,
                      rp_description) {}

    int powerConsumed(int speed) {return speed;};
protected:
    int maxSpeed;


};
#endif //ROBBYROBOT_LOCOMOTOR_H
