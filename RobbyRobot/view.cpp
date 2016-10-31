//
// Created by Mary Huerta on 10/11/16.
//
#include "view.h"
#include "robotPart.h"
#include "shop.h"
#include <iostream>
#include <string>
#include "iostream"
#include <iostream>
#include "FL/Fl.h"
#include "FL/Fl_Window.H"
#include "FL/fl_Box.H"

using namespace std;



void View::show_main_menu() {

    cout << endl << endl;
    cout << "            Main Menu        " << endl;
    cout << "===============================" << endl;
    cout << endl;
    cout << "1 (C)reate" << endl;
    cout << "2 (R)eport" << endl;
    cout << "3 (S)ave  **Coming Soon" << endl;
    cout << "9 (Q)uit " << endl;
    cout << endl;


}

void View::create_menu() {
    cout << endl << endl;
    cout << "  Create   " << endl;
    cout << "-----------" << endl;
    cout << endl;
    cout << "1.1 (O)rder" << endl;
    cout << "1.2 (C)ustomer" << endl;
    cout << "1.3 (S)ales Associate" << endl;
    cout << "1.4 Robot (M)odel" << endl;
    cout << "1.5 Robot (C)omponent" << endl;
    cout << "1.6 (Q)uit to Main Menu" << endl;
    cout << endl;

}
void View::report_menu() {
    cout << endl << endl;
    cout << "  Report   " << endl;
    cout << "-----------" << endl;
    cout << "2.1 (O)rder" << endl;
    cout << "2.2 (C)ustomer" << endl;
    cout << "2.3 (S)ales Associate" << endl;
    cout << "2.4 Robot (M)odel" << endl;
    cout << "2.5 Robot (C)omponent" << endl;
    cout << "2.6 (Q)uit to Main Menu" << endl;

}

View::View(Fl_Boxtype b, int W, int H, const int X, const int Y, const char *l, Shop &shop) : Fl_Box(b, X, Y, W, H, l),
                                                                                  shop(shop) {}




