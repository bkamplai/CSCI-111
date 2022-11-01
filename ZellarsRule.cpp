/*
###################################################################
# Program name: ZellersRule.cpp
# Author      : Brandon Kamplain
# Date written: Nov. 18, 2021
# Description : Program finds the day for the date
###################################################################
*/

#include <iostream>

using namespace std;

int main() {

    //Formula: F = K + [(13xM – 1)/5] + D + [D/4] + [C/4] – 2C
    //K = Date
    //M = Month num
    //D = Last two digits of the year
    //C = The first two digits of century

    int F, K, M, D, C, Rem;

    cout << "Enter the day (DD, 01-31): ";
    cin >> K;
    if (K!=01 && K!=02 && K!=03 && K!=04 && K!=05 && K!=06 && K!=07 && K!=8 && K!=9 && K!=10 && K!=11 && K!=12 && K!=13 && K!=14 && K!=15 && K!=16 && K!=17 && K!=18 && K!=19 && K!=20 && K!=21 && K!=22 && K!=23 && K!=24 && K!=25 && K!=26 && K!=27 && K!=28 && K!=29 && K!=30 && K!=31 ) {

        cout << "Please enter a number in DD format. Exiting...\n";
        exit(1);

    } else {

        cout << "K= " << K << endl;

        cout << "Enter the month (MM, 01-12): ";
        cin >> M;

        switch (M) {
        
        case 01:
            M = 11;
            break;
        case 02:
            M = 12;
            break;
        case 03:
            M = 1;
            break;
        case 04:
            M = 2;
            break;
        case 05:
            M = 3;
            break;
        case 06:
            M = 4;
            break;
        case 07:
            M = 5;
            break;
        case 8:
            M = 6;
            break;
        case 9:
            M = 7;
            break;
        case 10:
            M = 8;
            break;
        case 11:
            M = 9;
            break;
        case 12:
            M = 10;
            break;
        
        default:
            cout << "Please enter a number in MM format. Exiting...\n";
            exit(1);
            break;
        
        }

        cout << "M= " << M << endl;

        cout << "Enter the last 2 digits of the year (--YY): ";
        cin >> D;

        if (D<0 || D>99) {

            cout << "Please enter a number in --YY format (00-99). Exiting...\n";
            exit(1);

        } else {

            if (M == 12 || M == 11) {

                D--;

            }

        }

        cout << "D= " << D << endl;

        cout << "Enter the first 2 digits of the century (YY--): ";
        cin >> C;

        if (C<0 || C>99) {

            cout << "Please enter a number in YY-- format (00-99). Exiting...\n";
            exit(1);

        }

        cout << "C= " << C << endl;

        F = K + (((13*M)-1)/5) + D + (D/4) + (C/4) - (2*C);

        cout << "F= " << F << endl;

        Rem = F%7;

        cout << "Rem= " << Rem << endl;

        if (M<=10) {

            M = M+2;

        } else if (M==11|| M==12) {

            M = M-10;

        }

        switch (Rem) {
        
        case 1:
            cout << M << "/" << K << "/" << C << D << " was on a Monday.\n";
            break;
        case 2:
            cout << M << "/" << K << "/" << C << D << " was on a Tuesday.\n";
            break;
        case 3:
            cout << M << "/" << K << "/" << C << D << " was on a Wednesday.\n";
            break;
        case 4:
            cout << M << "/" << K << "/" << C << D << " was on a Thursday.\n";
            break;
        case 5:
            cout << M << "/" << K << "/" << C << D << " was on a Friday.\n";
            break;
        case 6:
            cout << M << "/" << K << "/" << C << D << " was on a Saturday.\n";
            break;
        case 7:
            cout << M << "/" << K << "/" << C << D << " was on a Sunday.\n";
            break;
        case -1:
            cout << M << "/" << K << "/" << C << D << " was on a Monday.\n";
            break;
        case -2:
            cout << M << "/" << K << "/" << C << D << " was on a Tuesday.\n";
            break;
        case -3:
            cout << M << "/" << K << "/" << C << D << " was on a Wednesday.\n";
            break;
        case -4:
            cout << M << "/" << K << "/" << C << D << " was on a Thursday.\n";
            break;
        case -5:
            cout << M << "/" << K << "/" << C << D << " was on a Friday.\n";
            break;
        case -6:
            cout << M << "/" << K << "/" << C << D << " was on a Saturday.\n";
            break;
        case -7:
            cout << M << "/" << K << "/" << C << D << " was on a Sunday.\n";
            break;
        
        }

    }

    return 0;

}