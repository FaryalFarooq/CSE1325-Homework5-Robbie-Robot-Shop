//
// Created by Mary Huerta on 10/11/16.
//

#include "controller.h"
#include "shop.h"
#include "view.h"
#include "arm.h"
#include "battery.h"
#include "ComponetType.h"
#include "head.h"
#include "locomotor.h"
#include "RobotModel.h"
#include "RobotPart.h"
#include "torso.h"
#include <iostream>
#include <string>

using namespace std;

void Controller::cli() {
    char cmd = 'Q';
    while (cmd != 'Q') {
        cout << "Command? ";
        cin >> cmd;
        cin.ignore();
        execute_cmd(cmd);
    }
}

void Controller::execute_cmd(int cmd) {
    if (cmd == 'C') {



    }

    else if(cmd == 99) {
        robotmodel.easterEgg();
    }
    else {
        cerr << "Invalid command " << endl << endl;
    }

    }



}

