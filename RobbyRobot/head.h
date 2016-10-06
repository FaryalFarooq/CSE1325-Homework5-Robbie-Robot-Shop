//
// Created by Mary Huerta on 10/5/16.
//

#ifndef ROBBYROBOT_HEAD_H
#define ROBBYROBOT_HEAD_H

#include "RobotPart.h"

class Head: public RobotPart {
public:
    Head(   bool h_type,
            string rp_name,
            int rp_partNumber,
            ComponetType rp_componentType, //
            double rp_weight,
            double rp_cost,
            string rp_description
    ):

            type(h_type),

            RobotPart(rp_name ,
                      rp_partNumber,
                      rp_componentType, //
                      rp_weight,
                      rp_cost,
                      rp_description) {}
protected:
    int type;

};
#endif //ROBBYROBOT_HEAD_H
