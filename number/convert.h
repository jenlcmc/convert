#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <cmath>
#include <unordered_map>
#include <sstream>
#include <string>
using namespace std;

/**
 * @brief convert a number from bianry to decimal
 * 1st = find weight of each bit in the binary. Then weight of each bit in binary assigned
 * from right to left. Weight of righmots bit is 0. Weight of bit to left of righmots = 1 and so on 
 * Use weight of each bit to find decimal. For each bit, x2 to power of its weight and add all of num
 * Weight of each bit must be know and assignt right to left. 
 * 
 * @param bin = binary numer 
 * @param dec = decimal number 
 * @param weight = weight of each bit in bianry
 */
void binToDec(int bin, int& dec, int& weight){
    int bit;
    if(bin > 0){
        bit = bin % 10; //extract righmost bit 
        dec = dec + bit * static_cast<int>(pow(2.0, weight));
        bin = bin / 10; //remove rightmost bit
        weight++;
        binToDec(bin, dec, weight);
    }
}

/**
 * @brief to convert decimal to binary, 1st convert the quotient num /2 into 
 * equivalent binary and append rightmost bit of num to binary representation
 * of num /2
 * 
 * @param num = decimal num 
 * @param base = base for binary is alway 2
 */
void decToBin(int num, int base){
    if(num > 0){
        decToBin(num / base, base);
        cout << num % base;
    }
}

/**
 * @brief map for hex code from binary
 * 
 * @param mp = map for hex code
 */
void hexMap(unordered_map<string, char> *mp){
    (*mp)["0000"] = '0';
    (*mp)["0001"] = '1';
    (*mp)["0010"] = '2';
    (*mp)["0011"] = '3';
    (*mp)["0100"] = '4';
    (*mp)["0101"] = '5';
    (*mp)["0110"] = '6';
    (*mp)["0111"] = '7';
    (*mp)["1000"] = '8';
    (*mp)["1001"] = '9';
    (*mp)["1010"] = 'A';
    (*mp)["1011"] = 'B';
    (*mp)["1100"] = 'C';
    (*mp)["1101"] = 'D';
    (*mp)["1110"] = 'E';
    (*mp)["1111"] = 'F';
}
/**
 * @brief group each 4 bits from right to left before decimal if have
 * and from left to right after decimal point if have. Then add 0 in group
 * that not have 4 bits. Convert each 4 bits group to hex code.
 * 
 * @param bin = binary number
 * @return string of hex code
 */
string binToHex(string bin){
    int length = bin.length();
    int find = bin.find_first_of('.');
    
    // length of string before '.'
    int len_left = find != -1 ? find : length;
    // add min 0's in the beginning to make left substring length divisible by 4
    int new_length = (4 - len_left % 4) % 4;
    
    for (int i = 0; i < new_length; i++)
        bin = '0' + bin;
    
    // if decimal point exists   
    if (find != -1)   
    {
        // length of string after '.'
        // add min 0's in the end to make right substring length divisible by 4
        int len_right = length - len_left - 1;
        
        for (int i = 0; i < new_length; i++)
            bin = bin + '0';
    }
    
    // create map between binary and itsnhex code
    unordered_map<string, char> bin_hex_map;
    hexMap(&bin_hex_map);
    
    int i = 0;
    string hex = "";
    
    while (true)
    {
        // one by one extract from left, substring of size 4 and add its hex code
        hex += bin_hex_map[bin.substr(i, 4)];
        i += 4;
        if (i == bin.size())
            break;
        
        // if '.' is encountered add it to result
        if (bin.at(i) == '.')   
        {
            hex += '.';
            i++;
        }
    }
    
    // required hexadecimal number
    return hex;   
}

/**
 * @brief mapping hex code for binary using switch case
 * 
 * @param hex_nums = string of hex 
 */
void hexToBin(string hex_nums){
    long int i = 0;

    while(hex_nums[i]){
        switch(tolower(hex_nums[i])){
            case '0':
                cout << "0000";
                break;
            case '1':
                cout << "0001";
                break;
            case '2':
                cout << "0010";
                break;
            case '3':
                cout << "0011";
                break;
            case '4':
                cout << "0100";
                break;
            case '5':
                cout << "0101";
                break;
            case '6':
                cout << "0110";
                break;
            case '7':
                cout << "0111";
                break;
            case '8':
                cout << "1000";
                break;
            case '9':
                cout << "1001";
                break;
            case 'a':
                cout << "1010";
                break;
            case 'b':
                cout << "1011";
                break;
            case 'c':
                cout << "1100";
                break;
            case 'd':
                cout << "1101";
                break;
            case 'e':
                cout << "1110";
                break;
            case 'f':
                cout << "1111";
                break;
            default:
            cout << "\nInvalid hex digit" << hex_nums[i];
            }
        i++;
    }
}

#endif