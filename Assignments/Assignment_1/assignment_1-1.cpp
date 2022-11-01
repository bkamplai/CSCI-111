/*
###################################################################
# Program name: ascend_or_descend_or_neither.cpp
# Author      : Brandon Kamplain
# Date written: Aug. 26, 2021
# Description : This program asks the user for a 6 digit integer and
# tells them whether the number is ascending, descending, or neither.
###################################################################
*/

#include <iostream>

using namespace std;

int main() {

    //Takes a user input and assigns it to a variable
    //i = initial
    int i;
    cout << "Enter a 6 digit integer: ";
    cin >> i;

    //Take the user input and "digitizes" into their respected place values
    // ones = o, tens = t, hundreds = h, thousands = th, ten-thousands = tt,
    //hundred-thousands = ht
    int o, t, h, th, tt, ht, rem;

    ht = i/100000;
    rem = i%100000;

    tt = rem/10000;
    rem = rem%10000;

    th = rem/1000;
    rem = rem%1000;

    h = rem/100;
    rem = rem%100;

    t = rem/10;
    rem = rem%10;

    o = rem;

    //Checks to see if each place value is ascending or descending and outputs the following string.
    if (ht > tt && tt > th && th > h && h > t && t > o) {
        cout << "The digits in this number are in descending order.";
    } else if (ht < tt && tt < th && th < h && h < t && t < o) {
        cout << "The digits in this number are in ascending order.";
    } else {
        cout << "The digits in this number are neither in ascending nor descending order.";
    }

    return 0;

}