//
// Created by Mary Huerta on 10/6/16.
//

#ifdef _MSC_VER
#include "stdafx.h"
#endif

#include "RobotPart.h"
#include <string>
#include <iostream>

using namespace std;


string RobotPart::to_string() {
    string rob =  "  " + name + ": " + description + " Type is "+componentType.to_string() ;
    return rob;

}



ostream& operator<<(ostream& os, RobotPart& rp) {
    os << rp.to_string();
    return os;
}