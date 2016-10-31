//
// Created by Mary Huerta on 10/11/16.
//

#ifndef ROBBYROBOT_CONTROLLER_H
#define ROBBYROBOT_CONTROLLER_H

#include "shop.h"
#include "view.h"
#include <FL/Fl_Box.H>
#include "FL/Fl.H"


class Controller {
public:

    Controller (Shop& shp) : shop(shp), view(FL_UP_BOX, 0, 0, X, Y, nullptr, shop) {}
    void cli();
    void cliSubMenu(int cmd);
    void execute_cmd_create( int cmd);
    void execute_cmd_report( int cmd);
private:
    Shop& shop;
    View view;
    const int X = 460;
    const int Y = 860;

};


#endif //ROBBYROBOT_CONTROLLER_H
