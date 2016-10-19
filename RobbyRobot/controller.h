//
// Created by Mary Huerta on 10/11/16.
//

#ifndef ROBBYROBOT_CONTROLLER_H
#define ROBBYROBOT_CONTROLLER_H

#include "shop.h"
#include "view.h"

class Controller {
public:
    Controller (Shop& shp) : shop(shp), view(View(shop)) {}
    void cli();
    void cliSubMenu(int cmd);
    void execute_cmd_create( int cmd);
    void execute_cmd_report( int cmd);
private:
    Shop& shop;
    View view;

};


#endif //ROBBYROBOT_CONTROLLER_H
