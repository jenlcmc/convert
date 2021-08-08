#ifndef MASS_H
#define MASS_H

#include <iostream>
using namespace std;

void kgToOther(float kg){
    float hg = kg * 10;
    float dag  = kg * 100;
    float g = kg * 1000;
    float dg = kg * 10000;
    float cg = kg * 100000;
    float mg = kg * 1000000;
    

    float lb = kg * 2.20;
    float oz = kg * 35.3;
    float carat = kg * 5000;
    float grain = kg * 15342.4;
    float newton = kg *  9.8;
    float stone = kg * 0.16;
    float ton = kg / 907;

    cout << kg << " kg = " << hg << " hg \n" << dag << " dag \n"
        << g << " g \n" << dg << " dg \n" << cg << " cg \n"
        << mg << " mg \n" << lb << " lb \n" << oz << " oz \n" 
        << carat << " carat " << grain << " grain \n" 
        << newton << " newton\n" << stone << " stone \n" 
        << ton << " tone \n" << endl;
}

void  gToOther(float g){
    float kg = g * 0.001;
    float hg = g * 0.01;
    float dag  = g * 0.1;
    float dg = g * 10.0;
    float cg = g * 100.0;
    float mg = g * 1000.0;
    

    float lb = g / 454.0;
    float oz = g / 28.35;
    float carat = g * 5.0;
    float grain = g * 15.432;
    float newton = g *  0.0098;
    float stone = g / 6350.0;
    float ton = g / 907185;

    cout << g << " g = " << kg << " kg \n" << hg 
        << " hg \n" << dag << " dag \n"
        << dg << " dg \n" << cg << " cg \n"
        << mg << " mg \n" << lb << " lb \n" << oz << " oz \n" 
        << carat << " carat " << grain << " grain \n" 
        << newton << " newton\n" << stone << " stone \n" 
        << ton << " tone \n" << endl;
}

void lbToOther(float lb){
    float kg = lb / 2.205;
    float hg = lb * 4.54;
    float dag  = lb * 45.4;
    float g = lb * 454.0;
    float dg = lb * 4535.9;
    float cg = lb * 45359;
    float mg = lb * 453592;
    
    float oz = lb * 16;
    float carat = lb * 2268;
    float grain = lb * 7000;
    float newton = lb *  4.45;
    float stone = lb / 14;
    float ton = lb / 2000;

    cout << lb << " lb = " << kg << " kg \n" << hg 
        << " hg \n" << dag << " dag \n" << g << " g \n"
        << dg << " dg \n" << cg << " cg \n"
        << mg << " mg \n" << lb << " lb \n" << oz << " oz \n" 
        << carat << " carat " << grain << " grain \n" 
        << newton << " newton\n" << stone << " stone \n" 
        << ton << " tone \n" << endl;
}

void ozToOther(float oz){
    float kg = oz / 35.274;
    float hg = oz * 0.28;
    float dag  = oz * 2.83;
    float g = oz * 28.35;
    float dg = oz * 283.50;
    float cg = oz * 2834.96;
    float mg = oz * 28350;

    float lb = oz / 16;
    float carat = oz * 142;
    float grain = oz * 438;
    float newton = oz *  0.28;
    float stone = oz / 224;
    float ton = oz / 32000;

    cout << oz << " oz = " << kg << " kg \n" << hg 
        << " hg \n" << dag << " dag \n" << g << " g \n"
        << dg << " dg \n" << cg << " cg \n"
        << mg << " mg \n" << lb << " lb \n" 
        << carat << " carat " << grain << " grain \n" 
        << newton << " newton\n" << stone << " stone \n" 
        << ton << " tone \n" << endl;
}

void stoneToOther(float stone){
    float kg = stone * 6.35;
    float hg = stone * 63.5;
    float dag  = stone * 635.0;
    float g = stone * 6350;
    float dg = stone * 63502.9;
    float cg = stone * 635029.3;
    float mg = stone * 6350293.18;

    float lb = stone * 14;
    float oz = stone * 224;
    float carat = stone * 31751.5;
    float grain = stone * 98000.0;
    float newton = stone * 62.28;
    float ton = stone / 143;

    cout << stone << " stone = " << kg << " kg \n" << hg 
        << " hg \n" << dag << " dag \n" << g << " g \n"
        << dg << " dg \n" << cg << " cg \n"
        << mg << " mg \n" << lb << " lb \n" << oz << " oz \n"
        << carat << " carat " << grain << " grain \n" 
        << newton << " newton\n" << stone << " stone \n" 
        << ton << " tone \n" << endl;
}

void tonToOther(float ton){
    float kg = ton * 907;
    float hg = ton * 10000;
    float dag  = ton * 100000;
    float g = ton * 1000000;
    float dg = ton * 10000000;
    float cg = ton * 100000000;
    float mg = ton * 1000000000;

    float lb = ton * 2204.6;
    float oz = ton * 35273.96;
    float carat = ton * 5000000;
    float grain = ton * 15432358.3;
    float newton = ton * 9806.65;
    float stone = ton * 157.47;

    cout << ton << " ton = " << kg << " kg \n" << hg 
        << " hg \n" << dag << " dag \n" << g << " g \n"
        << dg << " dg \n" << cg << " cg \n"
        << mg << " mg \n" << lb << " lb \n" << oz << " oz \n"
        << carat << " carat " << grain << " grain \n" 
        << newton << " newton\n" << stone << " stone \n" 
        << endl;
}

#endif