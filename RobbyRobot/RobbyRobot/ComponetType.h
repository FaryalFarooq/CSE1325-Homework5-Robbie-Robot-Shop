//
// Created by Mary Huerta on 10/5/16.
//

#ifndef ROBBYROBOT_COMPONETTYPE_H
#define ROBBYROBOT_COMPONETTYPE_H

#include "string"
#include "std_lib_facilities.h"

class ComponetType {
public:
    ComponetType(int val) : value(val) { }

    static const int head = 0;
    static const int locomotor = 1;
    static const int torso = 2;
    static const int battery = 3;
    static const int arm = 4;

    static const int num_types = 5;

    string to_string() {
        switch(value) {
            case(head):return "head";
            case(locomotor):return "locomotor";
            case(torso):return "torso";
            case(battery):return "battery";
            case(arm):return "arm";
            default: return "UNKNOWN";
        }
    }
private:
    int value;
};




#endif //ROBBYROBOT_COMPONETTYPE_H
