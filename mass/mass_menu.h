#ifndef MASS_MENU_H
#define MASS_MENU_H

#include "mass.h"
#include <string>

void massMenu(char Userchoice){
    Userchoice = tolower(Userchoice);

    if(Userchoice == 'a'){
        float kg;
        cout << "Please enter kilogram value: ";
        cin >> kg;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> kg;
        }
        cout << endl;
        kgToOther(kg);
    }

    else if(Userchoice == 'b'){
        float g;
        cout << "Please enter gram value: ";
        cin >> g;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> g;
        }
        cout << endl;
        gToOther(g);
    }

    else if(Userchoice == 'c'){
        float lb;
        cout << "Please enter pound value: ";
        cin >> lb;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> lb;
        }
        cout << endl;
        lbToOther(lb);
    }

    else if(Userchoice == 'd'){
        float oz;
        cout << "Please enter ounce value: ";
        cin >> oz;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> oz;
        }
        cout << endl;
        ozToOther(oz);
    }

    else if(Userchoice == 'e'){
        float stone;
        cout << "Please enter stone value: ";
        cin >> stone;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> stone;
        }
        cout << endl;
        stoneToOther(stone);
    }

    else if(Userchoice == 'f'){
        float ton;
        cout << "Please enter kilogram value: ";
        cin >> ton;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> ton;
        }
        cout << endl;
        tonToOther(ton);
    }

    //quit case
    else if(Userchoice == 'q'){
        return;
    }
    //wrong choice
    else{
        cout << "Wrong choice" << endl;
    }
}

#endif 