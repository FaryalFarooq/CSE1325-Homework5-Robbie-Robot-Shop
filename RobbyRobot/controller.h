//
// Created by Mary Huerta on 10/11/16.
//

#ifndef ROBBYROBOT_CONTROLLER_H
#define ROBBYROBOT_CONTROLLER_H

#include "RobotModel.h"
#include "view.h"

class Controller {
public:
    Controller (RobotModel& rob) : robotmodel(rob), view(View(robotmodel)) {}
    void cli();
    void execute_cmd( char cmd);

private:
    RobotModel& robotmodel;
    View view;

};


#endif //ROBBYROBOT_CONTROLLER_H
