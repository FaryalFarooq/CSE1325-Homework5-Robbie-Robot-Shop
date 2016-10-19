//
// Created by Mary Huerta on 10/6/16.
//

#include <iostream>
#include "RobotModel.h"
#include "RobotPart.h"
#include "arm.h"
#include "battery.h"
#include "head.h"
#include "locomotor.h"

RobotModel::RobotModel( Vector<RobotPart *> &robotParts, const String &name, int modelNumber, double price)
        : robotParts(robotParts), name(name), modelNumber(modelNumber), price(price) {}

const Vector<RobotPart *> &RobotModel::getRobotParts() const {
    return robotParts;
}

const String &RobotModel::getName() const {
    return name;
}

int RobotModel::getModelNumber() const {
    return modelNumber;
}

double RobotModel::getPrice() const {
    return price;
}

double componetCost();



void RobotModel::addRobotPart(RobotPart* rp){
    robotParts.push_back(rp);
}
void RobotModel::easterEggParts(){
    addRobotPart(new Head(true, "RobotHead",43, ComponetType::head, 13.6, 19.99, "It's an arm that can hold a cup"));
    addRobotPart(new Arm(22, 22,"RobotArm",43, ComponetType::arm, 13.6, 19.99, "It's an arm that can hold a cup"));
}

double RobotModel::componetCost() {
    double totalCost = 0;
    for ( int i; i < robotParts.size(); i++)
    {
        totalCost += robotParts[i]->get_cost();
    }
    return totalCost;
}






