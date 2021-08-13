#ifndef HEIGHT_METRIC_H  
#define HEIGHT_METRIC_H

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ftAndInToCm(float ft, float in){
    float cm = ((ft * 12) + in) * 2.54;
    return cm;
}

float cmToInchesAndFt(float cm){
    float inTotal = cm / 2.54;
    float ft = inTotal /12;
    float in = inTotal - 12 * ft;
    float res = ft + in;
    return res;
}

void mToOther(float meter){
    float ft = meter * 3.28;
    float cm = meter * 100.0;
    float dm = meter * 10.0;
    float in = meter * 39.37;
    float km = meter / 1000.0;
    float miles = meter / 1609.0;
    float mm = meter * 1000.0;
    float yd = meter * 1.094;

    cout << meter << " meter = " << ft << " ft \n" << cm << " cm \n"
        << dm << " dm \n" << in << " in \n" << km << " km \n" << miles
        << " miles \n" << mm << " mm \n" << yd << " yd \n" << endl;
}

void kmToOther(float km){
    float ft = km * 3280.84;
    float cm = km * 100000.0;
    float dm = km * 10000.0;
    float in = km * 39370.08;
    float m = km * 1000.0;
    float miles = km / 1.609;
    float mm = km * 1000000.0;
    float yd = km * 1094.0;

    cout << km << " kilometer = " << ft << " ft \n" << cm << " cm \n"
        << dm << " dm \n" << in << " in \n" << m << " m \n"
        << miles << " miles \n" << mm << " mm \n" << yd << " yd \n" << endl;
}

void cmToOther(float cm){
    float ft = cm / 30.48;
    float km = cm / 100000.0;
    float dm = cm / 10.0;
    float in = cm / 2.54;
    float m = cm / 100.0;
    float miles = cm / 160934.0;
    float mm = cm * 10.0;
    float yd = cm / 91.44;

    cout << cm << " centimeter = " << ft << " ft \n" << km << " km \n" 
        << dm << " dm \n" << in << " in \n" << m << " m \n" 
        << miles << " miles \n" << mm << " mm \n" << yd << " yd \n" << endl;
}

void ftToOther(float ft){
    float cm = ft * 30.48;
    float km = ft / 3281.0;
    float dm = ft / 3.048;
    float in = ft * 12.0;
    float m = ft / 3.281;
    float miles = ft / 5280.0;
    float mm = ft * 305.0;
    float yd = ft / 3.0;

    cout << ft << " foot = " << cm << " cm \n" << km << " km \n" 
        << dm << " dm \n" << in << " in \n" << m << " m \n" 
        << miles << " miles \n" << mm << " mm \n" << yd << " yd \n" << endl;
}

void inToOther(float in){
    float ft = in / 12.0;
    float km = in / 39370.0;
    float dm = in / 3.937;
    float cm = in * 2.54;
    float m = in / 39.37;
    float miles = in / 63360.0;
    float mm = in * 25.4;
    float yd = in / 36.0;

    cout << in << " inches = " << ft << " ft \n" << km << " km \n" 
        << dm << " dm \n" << cm << " cm \n" << m << " m \n" 
        << miles << " miles \n" << mm << " mm \n" << yd << " yd \n" << endl;
}

void milesToOther(float miles){
    float ft = miles * 5280.0;
    float km = miles * 1.609;
    float dm = miles * 16093.0;
    float cm = miles * 160934.0;
    float m = miles * 1609.0;
    float in = miles * 63360.0;
    float mm = miles * pow(1.609, 6);
    float yd = miles * 1760.0;

    cout << miles << " miles = " << ft << " ft \n" << km << " km \n" 
        << dm << " dm \n" << cm << " cm \n" << m << " m \n" 
        << in << " in \n" << mm << " mm \n" << yd << " yd \n" << endl;
}

void yardToOther(float yard){
    float ft = yard * 3.0;
    float km = yard / 1094.0;
    float dm = yard * 9.144;
    float cm = yard * 91.44;
    float m = yard / 1.094;
    float miles = yard / 1760.0;
    float mm = yard * 914.0;
    float in = yard / 36.0;

    cout << yard << " yards = " << ft << " ft \n" << km << " km \n" 
        << dm << " dm \n" << cm << " cm \n" << m << " m \n" 
        << miles << " miles \n" << mm << " mm \n" << in << " in\n" << endl;
}

#endif