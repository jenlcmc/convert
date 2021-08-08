#include "sub_menu.h"
using namespace std;

int main(){
    
    //main driven code
    int choice;
    bool done = false;

    do{
        cout << "\n********************************" << endl;
        cout << "(1) Converation between binary, decimal, and hex" << endl;
        cout << "(2) Converation between Fahrenheit and Celsius" << endl;
        cout << "(3) Weight converation" << endl;
        cout << "(4) Height conversation" << endl;
        cout << "(0) Quit" << endl;

        cin >> choice;

        switch (choice){
            case 1:
                numMenu();
                break;

            case 2:
                tempMenu();
                break;

            case 0:
                done = true;
                break;

            default:
                cout << "Wrong choice" << endl;
                break;
        }
    } while(!done);
    
    return 0;
}

