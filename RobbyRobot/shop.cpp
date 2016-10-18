//
// Created by Mary Huerta on 10/11/16.
//

#include "shop.h"
#include "RobotModel.h"
#include "RobotPart.h"
#include "arm.h"
#include "torso.h"
#include "locomotor.h"
#include "head.h"
#include "arm.h"
#include "battery.h"
using namespace std;
void Shop:: createRobotModel(RobotModel* rob){
    robotModels.push_back(rob);
}

void Shop:: createRobotPart(RobotPart* robPart){
    robotParts.push_back(robPart);
}

int Shop::numberOfRobotModels() {
    return robotModels.size();
}

void Shop::printParts() {
    for (int i=0; i< robotParts.size() ; ++i){
        cout << i << " " << robotParts[i]->get_name() << endl;

    }
}

