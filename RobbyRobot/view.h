//
// Created by Mary Huerta on 10/11/16.
//

#ifndef ROBBYROBOT_VIEW_H
#define ROBBYROBOT_VIEW_H
#include "shop.h"


class View {
public:
    View (Shop& shp) : shop(shp) {}
    void show_main_menu();
    void create_menu();


private:
    Shop& shop;


};


#endif //ROBBYROBOT_VIEW_H
