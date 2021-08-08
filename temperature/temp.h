#ifndef TEMP_H
#define TEMP_H

float fahToCel(float fahrenheit){
    float cel = (fahrenheit - 32.0) / 1.8;
    return cel;
}

float fahToKelvin(float fahrenheit){
    float kel = (((fahrenheit - 32.0) * (5.0/9.0)) + 273.15);
    return kel;
}

float celToFah(float cel){
    float fah = (cel * 1.8) + 32.0;
    return fah;
}

float celToKelvin(float cel){
    float kel = cel + 273.15;
    return kel;
}

float kelvinToFah(float kelvin){
    float fah = (((kelvin - 273.15) * (9.0/5.0)) + 32.0);
    return fah;
}

float kelvinToCel(float kelvin){
    float kel = kelvin - 273.15;
    return kel;
}

#endif