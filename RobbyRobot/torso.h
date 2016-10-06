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
            Head t_head,
            vector<Arm> t_arm,
            Locomotor t_locomotor,
            vector<Battery> t_battery,
            string rp_name,
            int rp_partNumber,
            ComponetType rp_componentType, //
            double rp_weight,
            double rp_cost,
            string rp_description
    ):


            batteryCompartments(t_battery_compartments),
            head(t_head),
            arm(t_arm),
            locomotor(t_locomotor),
            battery(t_battery),
            RobotPart(rp_name ,
                      rp_partNumber,
                      rp_componentType, //
                      rp_weight,
                      rp_cost,
                      rp_description) {}
protected:
    int batteryCompartments;
    Head head;
    vector<Arm> arm;
    Locomotor locomotor;
    vector<Battery> battery;



};

/*class Torso: public RobotPart {
    int batteryCompartments;
    Head head;
    vector<Arm> arms;
    Locomotor locomotor;
    vector<Battery> batteries;
    //public: Torso (int batteryCompartments): batteryCompartments(batteryCompartments)
    //{RobotPart( name, partNumber, componentType, weight, cost, description);}

};*/



#endif //ROBBYROBOT_TORSO_H
