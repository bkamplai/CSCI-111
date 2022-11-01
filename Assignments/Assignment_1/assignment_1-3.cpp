/*
###################################################################
# Program name: divisible_by_3.cpp
# Author      : Brandon Kamplain
# Date written: Aug. 26, 2021
# Description : This program asks the user for an integer and checks
# to see if that number is divisible by 3, then also checks to see
# if that number is ALSO divisible by 3.
###################################################################
*/

#include <iostream>

using namespace std;

int main() {

    int user_num;
    cout << "Enter an integer: ";
    cin >> user_num;

    int num2 = user_num%3;
    int num3 = user_num/3;

    if (num2 == 0 && (num3%3) == 0) {
        cout << "The sum of the digits of an integer number, " << user_num << " is divisible by 3, therefore the number MUST be divisible by 3. \n";
    } else {
        cout << "The sum of the digits of an integer number, " << user_num << " is not divisible by 3, therefore the number IS NOT divisible by 3. \n";
    }

}