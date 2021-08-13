#ifndef ROMAN_MENU_H
#define ROMAN_MENU_H

#include "roman.h"

void RomanMenu(char choice){
    choice = tolower(choice);
    
    //roman to int
    if(choice == 'a'){
        string roman;
        cout << "Enter roman numerial: ";
        cin >> roman;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> roman;
        }
        cout << endl;
        int numerical = romanToInt(UpperString(roman));
        cout << roman << " in Roman numerial = " << numerical << endl;
    }
    
    //int to roman
    else if(choice == 'b'){
        int num;
        cout << "Enter numerial: ";
        cin >> num;

        while(cin.fail()){
            cout << "Invalid input \nPlease enter again:" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> num;
        }

        cout << endl;
        string roman = intToRoman(num);
        cout << num << " = " << roman << " in Roman numerical" << endl;
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