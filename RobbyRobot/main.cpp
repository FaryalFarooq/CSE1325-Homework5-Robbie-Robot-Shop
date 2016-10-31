#include <iostream>

#include <iostream>
#include <vector>
#include "ComponetType.h"

#include "robotpart.h"
#include "battery.h"
#include "head.h"
#include "arm.h"
#include "locomotor.h"
#include "torso.h"
#include "RobotModel.h"

#include <iostream>
#include "FL/Fl.h"
#include "FL/Fl_Window.H"
#include "FL/fl_Box.H"
using namespace std;

#include "shop.h"
#include "controller.h"


//
// Widgets
//

Fl_Window *win;
View *view;

//
// Callbacks
//


int main() {
    const int X = 640;
    const int Y = 480;
    Shop shop;
    Controller controller(shop);


    //Create a window
    win = new Fl_Window{X, Y, "Robbie's Robot Shop"};

    //Create a view
    view = new View{ FL_UP_BOX ,0 ,0 ,X ,Y , 0, shop };

    //Enable resizing
    win -> resizable();

    win->end();
    win->show();


    controller.cli();

    return (Fl::run());
}

