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
#include <vector>

//cout << shop.robotParts[0]->get_name();




using namespace std;

// Have user input a Character Command
void Controller::cli() {
    int cmd = -1;
    while (cmd != 9) {
        view.show_main_menu();
        cout << "Command? ";
        cin >> cmd;
        cin.ignore();
        cliSubMenu(cmd); // Send to another Menu


    }
}
void Controller::cliSubMenu(int cmd){
    int subCmd = -1;
    if (cmd == 1){ // User put in 1 will forward them to create menu
        view.create_menu();
        cout << "Command? ";
        cin >> subCmd;
        cin.ignore();
        execute_cmd_create(subCmd);
    }
    else if (cmd == 2){
        view.report_menu();
        cout << "Command? ";
        cin >> subCmd;
        cin.ignore();
        execute_cmd_report(subCmd);
    }
    else if (cmd == 9){

    }
    else {
        cerr << "Invalid Command" << endl << endl;

    }

}
void Controller::execute_cmd_report( int cmd) {
    if (cmd == 5){
        for (int i = 0; i < shop.robotParts.size(); ++i ){
            cout << i+1 << ". " << shop.robotParts[i]->to_string() <<  endl;
        }
    }
    else if (cmd == 4){
        for (int i = 0; i < shop.robotModels.size(); ++i){
            cout << i+1 << "." << shop.robotModels[i]->to_string() << endl;

        }
    }

}

void Controller::execute_cmd_create(int  cmd) {
    if (cmd == 1){

    }
    if (cmd == 5) {
        static int partNumber = 0;
        /* name(rp_name),
            partNumber(rp_partNumber),
            componentType(rp_componentType),
            weight(rp_weight),
            cost(rp_cost),
            description(rp_description) { } */
        String name, description;
        int type, maxHeads;
        double weight, cost;

        cout << "name? ";
        getline(cin, name);

        cout << "description? " ;
        getline(cin, description);

        cout << "weight? ";
        cin >> weight;
        cin.ignore();

        cout << "cost? $";
        cin >> cost;
        cin.ignore();

        cout << "Robot Part Types:" << endl;
        cout << "   1. Head  2.Locomotor 3.Torso 4.Arm 5.Battery" << endl;

        cout << "type? ";
        cin >> type;
        cin.ignore();

        if (type == 1){
            cout << "maxheads?";
            cin >> maxHeads;
            cin.ignore();
            shop.createRobotPart(new Head(true, name, partNumber, ComponetType::head, weight, cost, description));

        }
        if (type == 2){
            cout << "MaxSpeed?";
            cin >> maxHeads;
            cin.ignore();
            shop.createRobotPart(new Locomotor(true, name, partNumber, ComponetType::locomotor, weight, cost, description));

        }
        if (type == 3) {
            bool goodAmount = false;
            int batteryCompartments = 0;
            while (!goodAmount) {
                cout << "batteryCompartments(1 to 3)?";
                cin >> batteryCompartments;
                cin.ignore();
                if (batteryCompartments > 0 && batteryCompartments < 4) { goodAmount = true; }

            }
            shop.createRobotPart(new Torso( batteryCompartments ,name, partNumber, ComponetType::torso, weight, cost, description));


        }
        if (type == 4){
            int energy;
            int maxPower;
            cout << "energy?";
            cin >> energy;
            cin.ignore();
            cout << "maxPower?";
            cin >> maxPower;
            cin.ignore();
            shop.createRobotPart(new Arm(energy, maxPower ,name, partNumber, ComponetType::arm, weight, cost, description));

        }
        if (type == 5){
            int energy;
            int maxPower;
            cout << "energy?";
            cin >> energy;
            cin.ignore();
            cout << "maxPower?";
            cin >> maxPower;
            cin.ignore();
            shop.createRobotPart(new Battery(energy, maxPower ,name, partNumber, ComponetType::battery, weight, cost, description));

        }
        partNumber++;

    }
    else if (cmd == 4)
    {
        string modelName;
        cout << "name?";
        getline(cin, modelName);

        double totalCost = 0;
        static int robotModelNumber = 0;
        int amountOfRobotParts = 0;
        vector<RobotPart*> robotPartsModel;
        int item;
        for (int i = 0; i < shop.robotParts.size(); ++i ){
            cout << i << ". " << shop.robotParts[i]->get_name() << endl;
        }
        cout << "Add one part at a time. Enter 99 to stop" << endl ;


        while (item != 99)
        {

            cout << "#";
            cin >> item;
            cin.ignore();
            if (item != 99 && item < shop.robotParts.size() ) {
                robotPartsModel.push_back(shop.robotParts[item]);
                amountOfRobotParts++;
                totalCost += shop.robotParts[item]->get_cost();
            }
        }

        shop.createRobotModel(new RobotModel( robotPartsModel, modelName, robotModelNumber , totalCost ));
        robotModelNumber++;
    }
    else if (cmd == 6){
        cout << "Going back to Main Menu" << endl;
    }

    else {
        cerr << "Invalid command - going back to Main Menu" << endl << endl;
    }





}

