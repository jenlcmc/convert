#include "sub_menu.h"
using namespace std;

int main(){
    
    //main driven code
    int choice;
    bool done = false;

    do{
        cout << "\n********************************" << endl;
        cout << "(1) Conversion between binary, decimal, and hex" << endl;
        cout << "(2) Conversion between Fahrenheit and Celsius" << endl;
        cout << "(3) Mass Conversion" << endl;
        cout << "(4) Height and Metric Conversion" << endl;
        cout << "(5) Roman numerical conversion" << endl;
        cout << "(0) Quit" << endl;

        cin >> choice;

        switch (choice){
            case 1:
                numMenu();
                break;

            case 2:
                tempMenu();
                break;

            case 3:
                MassMenu();
                break;

            case 4:
                HeightMetric();
                break;

            case 5:
                roman();
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

