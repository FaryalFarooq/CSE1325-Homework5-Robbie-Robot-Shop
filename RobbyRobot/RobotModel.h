//
// Created by Mary Huerta on 10/6/16.
//

#ifndef ROBBYROBOT_ROBOTMODEL_H
#define ROBBYROBOT_ROBOTMODEL_H
#include "RobotPart.h"
#include "locomotor.h"
#include <vector>
#include <iostream>

class RobotModel {
public:
    void addRobotPart(RobotPart* rp);
    string RobotPartToString( );

    double componetCost(int partNumber);
    //double maxSpeed(int partNumber);
    int getmaxSpeed(int partNumber) {
        return robotParts[partNumber]->getMaxSpeed();
    };

    RobotModel(const Vector<RobotPart *> &robotParts, const String &name, int modelNumber, double price);
    const Vector<RobotPart *> &getRobotParts() const;
    const String &getName() const;
    int getModelNumber() const;
    double getPrice() const;
    void easterEggParts();

private:
    vector<RobotPart*> robotParts;
    string name;
    int modelNumber;
    double price;

};


#endif //ROBBYROBOT_ROBOTMODEL_H
