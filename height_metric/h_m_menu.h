#ifndef H_M_MENU_H
#define H_M_MENU_H

#include "height_metric.h"

void MetricMenu(char choice){
    choice = tolower(choice);
    
    //ft + in to cm
    if(choice == 'a'){
        float ft, in;
        cout << "\nEnter value in ft: ";
        cin >> ft;
        cout << "\nEnter value in inches: ";
        cin >> in;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again in feet:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> ft;
            cout << "Please enter again in inches:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> in;
        }

        cout << endl;
        float cm = ftAndInToCm(ft, in);
        cout << ft << " ft " << in << " in = " << cm << " in cm" << endl; 
    }
    
    //cm to ft + in
    else if(choice == 'b'){
        float cm;
        cout << "\nEnter value in cm: ";
        cin >> cm;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again in cm:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> cm;
        }

        cout << endl;
        float res = cmToInchesAndFt(cm);
        cout << cm << " cm =" << res << " in ft and inches" << endl; 
    }
    
    //m to other
    else if(choice == 'c'){
        float m;
        cout << "\nEnter value in meter: ";
        cin >> m;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again in m:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> m;
        }

        cout << endl;
        mToOther(m);
    }

    //km to other
    else if(choice == 'd'){
        float km;
        cout << "\nEnter value in kilometer: ";
        cin >> km;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again in m:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> km;
        }

        cout << endl;
        mToOther(km);
    }

    //cm to other
    else if(choice == 'e'){
        float cm;
        cout << "\nEnter value in centimeter: ";
        cin >> cm;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again in cm:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> cm;
        }

        cout << endl;
        mToOther(cm);
    }

    //ft to other
    else if(choice == 'f'){
        float ft;
        cout << "\nEnter value in ft: ";
        cin >> ft;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again in ft:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> ft;
        }

        cout << endl;
        mToOther(ft);
    }

    //in to other
    else if(choice == 'g'){
        float in;
        cout << "\nEnter value in inches: ";
        cin >> in;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again in inches:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> in;
        }

        cout << endl;
        mToOther(in);
    }

    //miles to other 
    else if(choice == 'h'){
        float miles;
        cout << "\nEnter value in miles: ";
        cin >> miles;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again in miles:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> miles;
        }

        cout << endl;
        mToOther(miles);
    }
    
    //yd to other 
    else if(choice == 'i'){
        float yd;
        cout << "\nEnter value in yards: ";
        cin >> yd;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again in yards:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> yd;
        }

        cout << endl;
        mToOther(yd);
    }

    //quit case
    else if(choice == 'q'){
        return;
    }
    //wrong choice
    else{
        cout << "Wrong choice" << endl;
    }
}

#endif