//
// Created by Mary Huerta on 10/11/16.
//

#ifndef ROBBYROBOT_VIEW_H
#define ROBBYROBOT_VIEW_H

#include <FL/Fl_Box.H>
#include "FL/Fl.H"
#include "shop.h"


class View: public Fl_Box {
public:
    View(Fl_Boxtype b, int W, int H, const int X, const int Y, const char *l, Shop& shop);

    //View (Shop& shp) : shop(shp) {}
    void show_main_menu();
    void create_menu();
    void show_parts();
    void report_menu();

private:
    Shop& shop;


};


#endif //ROBBYROBOT_VIEW_H
