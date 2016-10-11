//
// Created by Mary Huerta on 10/11/16.
//

#ifndef ROBBYROBOT_SHOP_H
#define ROBBYROBOT_SHOP_H


class shop {
public:
    RobotModel (Library& lib) : library(lib), view(View(library)) { }
    void cli();
    void execute_cmd(int cmd);
private:
    Library& library;
    View view;

};


#endif //ROBBYROBOT_SHOP_H
