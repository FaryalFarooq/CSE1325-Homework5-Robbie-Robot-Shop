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

void Shop:: createRobotModel(RobotModel* rob){
    robotModels.push_back(rob);
}

int Shop::numberOfRobotModels() {
    return robotModels.size();
}
