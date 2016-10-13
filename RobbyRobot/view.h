//
// Created by Mary Huerta on 10/11/16.
//

#ifndef ROBBYROBOT_VIEW_H
#define ROBBYROBOT_VIEW_H
#include "RobotModel.h"


class View {
public:
    View (RobotModel& rob) : model(rob) {}
    void show_main_menu();
    void create_menu();


private:
    RobotModel& model;


};


#endif //ROBBYROBOT_VIEW_H
