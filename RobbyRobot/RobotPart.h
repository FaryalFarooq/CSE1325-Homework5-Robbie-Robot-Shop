//
// Created by Mary Huerta on 10/5/16.
//

#ifndef ROBBYROBOT_ROBOTPART_H
#define ROBBYROBOT_ROBOTPART_H
#include "ComponetType.h"



#include <iostream>
#include <string>

using namespace std;

class RobotPart {
public:
    RobotPart(string rp_name,
              int rp_partNumber,
              ComponetType rp_componentType, //
              double rp_weight,
              double rp_cost,
              string rp_description ):


            name(rp_name),
            partNumber(rp_partNumber),
            componentType(rp_componentType), //
            weight(rp_weight),
            cost(rp_cost),
            description(rp_description) { }



    virtual string to_string();

    virtual int getMaxSpeed() { return 0;};

    friend ostream& operator<<(ostream& os, RobotPart& rp);


    string get_name() {return name;};
    int    get_partNumber() { return partNumber;};
    double get_weight() { return weight;};
    double get_cost() { return cost;};
    string get_description() {return description;};

    const ComponetType &getComponentType() const { return componentType; }


    // Thrown on check_in if publication isn't checked out
    //   or on cheeck_out if publication is already checked out
    class Invalid_part { };

protected:
    string name;
    int partNumber;
    ComponetType componentType; //
    double weight;
    double cost;
    string description;

};
#endif //ROBBYROBOT_ROBOTPART_H
