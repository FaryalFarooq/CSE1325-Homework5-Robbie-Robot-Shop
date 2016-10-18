//
// Created by Mary Huerta on 10/5/16.
//

#ifndef ROBBYROBOT_TORSO_H
#define ROBBYROBOT_TORSO_H
#include <vector>
#include <string.h>
#include "ComponetType.h"
#include "head.h"
#include "arm.h"
#include "locomotor.h"
#include "battery.h"

class Torso: public RobotPart {
public:
    Torso(  int t_battery_compartments,
            string rp_name,
            int rp_partNumber,
            ComponetType rp_componentType,
            double rp_weight,
            double rp_cost,
            string rp_description
    ):


            batteryCompartments(t_battery_compartments),
            RobotPart(rp_name ,
                      rp_partNumber,
                      rp_componentType,
                      rp_weight,
                      rp_cost,
                      rp_description) {}

    // Getters


    //Methods

    void setBatteryCompartments(int batteryCompartments) {
        Torso::batteryCompartments = batteryCompartments;
    }


protected:
    int batteryCompartments;




};


#endif //ROBBYROBOT_TORSO_H
