#ifndef SUB_MENU_H
#define SUB_MENU_H

#include "./number/num_menu.h"
#include "./temperature/temp_menu.h"
#include "./mass/mass_menu.h"
#include "./height_metric/h_m_menu.h"
#include "./roman/roman_menu.h"

using namespace std;

void numMenu(){
    char Userchoice;
    while(tolower(Userchoice) != 'q'){
        cout << "\n================================================================" << endl;
        cout << "\nWhich one you do want to choose?" << endl;
        cout << "(A) Binary to decimal" << endl;
        cout << "(B) Binary to hex\n" << endl;

        cout << "(C) Decimal to binary" << endl;
        cout << "(D) Decimal to hex\n" << endl;

        cout << "(E) Hex to decimal" << endl;
        cout << "(F) Hex to binary" << endl;

        cout << "\n(q) to quit" << endl;

        cin >> Userchoice;

        menus(Userchoice);
    }
}

void tempMenu(){
    char Userchoice;
    while(tolower(Userchoice) != 'q'){
        cout << "\n================================================================" << endl;
        cout << "\nWhich one you do want to choose?" << endl;
        cout << "(A) Celius to Fahrenheit" << endl;
        cout << "(B) Celius to Kelvin\n" << endl;

        cout << "(C) Fahrenheit to Celius" << endl;
        cout << "(D) Fahrenheit to Kelvin\n" << endl;

        cout << "(E) Kelvin to Celius" << endl;
        cout << "(F) Kelvin to Fahrenheit" << endl;

        cout << "\n(q) to quit" << endl;

        cin >> Userchoice;

        tempMenu(Userchoice);
    }
}

void MassMenu(){
    char Userchoice;
    while(tolower(Userchoice) != 'q'){
        cout << "\n================================================================" << endl;
        cout << "\nWhich one you do want to choose?" << endl;
        cout << "(A) Kilograms to other units" << endl;
        cout << "(B) Grams to other unit\n" << endl;

        cout << "(C) Pounds to other units" << endl;
        cout << "(D) Ounces to other units\n" << endl;

        cout << "(E) Stones to other units" << endl;
        cout << "(F) Tons to other units" << endl;

        cout << "\n(q) to quit" << endl;

        cin >> Userchoice;

        massMenu(Userchoice);
    }
}

void HeightMetric(){
    char Userchoice;
    while(tolower(Userchoice) != 'q'){
        cout << "\n================================================================" << endl;
        cout << "\nWhich one you do want to choose?" << endl;
        cout << "(A) Ft and Inches to Cm" << endl;
        cout << "(B) Cm to Ft and Inches\n" << endl;

        cout << "(C) Meter to other units" << endl;
        cout << "(D) Kilometer to other units\n" << endl;

        cout << "(E) Centimeter to other units" << endl;
        cout << "(F) Ft to other units" << endl;
        cout << "(G) Inches to other units" << endl;
        cout << "(H) Miles to other units" << endl;
        cout << "(I) Yards to other units" << endl;

        cout << "\n(q) to quit" << endl;

        cin >> Userchoice;

        MetricMenu(Userchoice);
    }
}

void roman(){
    char Userchoice;
    while(tolower(Userchoice) != 'q'){
        cout << "\n================================================================" << endl;
        cout << "\nWhich one you do want to choose?" << endl;
        cout << "(A) Roman to numerial" << endl;
        cout << "(B) Numerial to Roman\n" << endl;

        cout << "\n(q) to quit" << endl;

        cin >> Userchoice;

        RomanMenu(Userchoice);
    }
}

#endif