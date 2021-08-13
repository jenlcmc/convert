#ifndef ROMAN_H
#define ROMAN_H

#include <iostream>
#include <string>
using namespace std;

int romanToInt(string S) {
    int ans = 0, num = 0;
    // ~i = from last to beginning with - sign 
    for (int i = S.size()-1; ~i; i--) {
        switch(S[i]) {
            case 'I': 
                num = 1; 
                break;
            case 'V': 
                num = 5; 
                break;
            case 'X': 
                num = 10; 
                break;
            case 'L': 
                num = 50; 
                break;
            case 'C': 
                num = 100; 
                break;
            case 'D': 
                num = 500; 
                break;
            case 'M': 
                num = 1000; 
                break;
        }
        if (4 * num < ans)
            ans -= num;
        else 
            ans += num;
    }
    return ans;        
}

string intToRoman(int num){
    string res;
    string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    for(int i=0; num != 0; i++)
    {
        while(num >= val[i])
        {
            num -= val[i];
            res += sym[i];
        }
    }
    
    return res;
}

string UpperString(string s){
    string res;
    for(int i = 0; i < s.length(); i++){
        res += toupper(s[i]); 
    }
    return res;
}

#endif