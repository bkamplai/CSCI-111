/*
###################################################################
# Program name: multiplication_table.cpp
# Author      : Brandon Kamplain
# Date written: Aug. 26, 2021
# Description : This program asks the user for upper & lower bound
# values for both the row and column and then uses those numbers to
# create a multiplication table.
###################################################################
*/

#include <iostream>

using namespace std;

int main() {

    //Collects upper & lower bound values from user.
    //lr = lower row, ur = upper row
    //lc = lower column, uc = upper column
    int lr, ur, lc, uc;
    cout << "Please enter a lower-bound integer value for row: ";
    cin >> lr;

    cout << "Please enter an upper-bound integer value for row: ";
    cin >> ur;

    cout << "Please enter a lower-bound integer value for column: ";
    cin >> lc;

    cout << "Please enter an upper-bound integer value for column: ";
    cin >> uc;

    //Program checks to see if lower-bound values are not greater
    //than the upper-bound values.
    if (lr < ur && lc < uc) {
        //Takes the first table created and adds one to the lower row value
        //and creating the next row while updating the value of lr.
        for (int j = (lc*lr); j <= (ur*lc); j = j + lc){
            //Creats the first row while calculating the products from
            //the values the user provided.
            for (int i = (lr*lc); i <= (lr*uc); i = i + lr) {
                cout << i << " ";
            }
            lr++;
            cout << endl;
        }
    } else {
        cout << "Upper-bound value should be greater than the lower-bound values.";
    }
}