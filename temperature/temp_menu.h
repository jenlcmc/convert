#ifndef TEMP_MENU_H
#define TEMP_MENU_H

#include "temp.h"
#include <iostream>
#include <string>
using namespace std;

void tempMenu(char choice){
    choice = tolower(choice);
    
    //C to F
    if(choice == 'a'){
        float fah, cel;
        cout << "Please enter value in Celius: ";
        cin >> cel;
        while(cin.fail()){
            cout << "Invalid input \nPlease enter again:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> cel;
        }
        cout << endl;
        fah = celToFah(cel);
        cout << cel << " in Celius = " << fah << " in Fahrenheit" << endl;
    }
    
    // C to K
    else if(choice == 'b'){
        float kel, cel;
        cout << "Please enter value in Celius: ";
        cin >> cel;
        while(cin.fail()){
            cout << "Invalid input \nPlease enter again:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> cel;
        }
        cout << endl;
        kel = celToKelvin(cel);
        cout << cel << " in Celius = " << kel << " in Kelvin" << endl;
    }
    
    // F to C
    else if(choice == 'c'){
        float fah, cel;
        cout << "Please enter value in Fahrenheit: ";
        cin >> fah;
        while(cin.fail()){
            cout << "Invalid input \nPlease enter again:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> fah;
        }
        cout << endl;
        cel = fahToCel(fah);
        cout << fah << " in Fahrenheit = " << cel << " in Celius" << endl;
    }

    //F to K
    else if(choice == 'd'){
        float kel, fah;
        cout << "Please enter value in Fahrenheit: ";
        cin >> fah;
        while(cin.fail()){
            cout << "Invalid input \nPlease enter again:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> fah;
        }
        cout << endl;
        kel = fahToKelvin(fah);
        cout << fah << " in Fahrenheit = " << kel << " in Kelvin" << endl;
    }

    // K to C
    else if(choice == 'e'){
        float kel, cel;
        cout << "Please enter value in Kelvin: ";
        cin >> kel;
        while(cin.fail()){
            cout << "Invalid input \nPlease enter again:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> kel;
        }
        cout << endl;
        cel = kelvinToCel(kel);
        cout << kel << " in Kelvin = " << cel << " in Celius" << endl;
    }

    //K to F
    else if(choice == 'f'){
        float kel, fah;
        cout << "Please enter value in Kelvin: ";
        cin >> kel;
        while(cin.fail()){
            cout << "Invalid input \nPlease enter again:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> kel;
        }
        cout << endl;
        fah = kelvinToFah(kel);
        cout << kel << " in Kelvin = " << fah << " in Fahrenheit" << endl;
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