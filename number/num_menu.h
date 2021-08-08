#ifndef NUM_MENU_H
#define NUM_MENU_H

#include "convert.h"
using namespace std;

void menus(char choice){
    //bianry to decimal
        if(tolower(choice) == 'a'){
            int bin;
            int dec = 0;
            int weight = 0;
            cout << "\nEnter number in binary: ";
            cin >> bin;

            while(cin.fail()){
                cout << "Invalid input \nPlease enter again:" << endl;
                cin.clear();
                cin.ignore(100, '\n');
                cin >> bin;
            }

            cout << endl;
            binToDec(bin, dec, weight);
            cout << "Binary number is " << bin << " = " << dec << " decimal " << endl;
        }

        //binary to hex
        else if(tolower(choice) == 'b'){
            string bin_num;
            cout << "\nEnter number in binary: ";
            cin >> bin_num;

            while(cin.fail()){
                cout << "Invalid input \nPlease enter again:" << endl;
                cin.clear();
                cin.ignore(100, '\n');
                cin >> bin_num;
            }

            cout << endl;
            cout << "Binary number is " << bin_num << " = " << binToHex(bin_num) 
            << " hexadicimal \n" << endl;
        }

        //decimal to binary
        else if(tolower(choice) == 'c'){
            int deci;
            const int base = 2;
            cout << "\nEnter number in decimal: ";
            cin >> deci;

            while(cin.fail()){
                cout << "Invalid input \nPlease enter again:" << endl;
                cin.clear();
                cin.ignore(100, '\n');
                cin >> deci;
            }

            cout << endl; 
            cout << "Decimal is " << deci << " = ";
            decToBin(deci, base);
            cout << " binary " << endl;
        }

        //decimal to hex using hex build in function hex
        else if(tolower(choice) == 'd'){
            int decimal; 
            cout << "\nEnter number in decimal: ";
            cin >> decimal;

            while(cin.fail()){
                cout << "Invalid input \nPlease enter again:" << endl;
                cin.clear();
                cin.ignore(100, '\n');
                cin >> decimal;
            }
            
            cout << "Decimal is: " << decimal << " = " << hex << decimal << " in hex\n" << endl;
        }

        //hex to decimal using hex function and sstream
        else if(tolower(choice) == 'e'){
            stringstream val;
            string hexa;
            int decimal; 
            cout << "\nEnter number in hex: ";
            cin >> hexa;

            while(cin.fail()){
                cout << "Invalid input \nPlease enter again:" << endl;
                cin.clear();
                cin.ignore(100, '\n');
                cin >> hexa;
            }
            
            val << hexa;
            val >> hex >> decimal;
            cout << "Hex is: " << hexa << " = " << decimal << " in decimal\n" << endl;
        }

        //hex to binary
        else if(tolower(choice) == 'f'){
            char hex_nums[100];
            cout << "\nEnter number in hex: ";
            cin >> hex_nums;

            while(cin.fail()){
                cout << "Invalid input \nPlease enter again:" << endl;
                cin.clear();
                cin.ignore(100, '\n');
                cin >> hex_nums;
            }

            cout << endl;
            cout << "Hex number is: " << hex_nums << " = ";
            hexToBin(hex_nums);
            cout << " binary \n" << endl; 
        }
        
        //quit case
        else if(tolower(choice) == 'q'){
            return;
        }

        //wrong choice
        else{
            cout << "Wrong choice" << endl;
        }
}
#endif