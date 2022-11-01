/*
*****************************************************************
* Program name: eat_that_apple.cpp
* Author      : Brandon Kamplain
* Date written: Sept. 9, 2021
*****************************************************************
*/

#include <iostream>

using namespace std;

int main() {

    int EAT;
    int THAT;
    int APPLE;
    int E1, A1, T1;
    int T21, H2, A2, T22;
    int A3, P31, P32, L3, E3;
    int rem;
    for (int EAT = 100; EAT <=999; EAT++) {

        for (int THAT = 1000; THAT<=9999; THAT++) {

            //digitize EAT
            E1 = EAT/100;
            rem = EAT%100;
            A1 = rem/10;
            rem = rem%10;
            T1 = rem;

            if (E1 != A1 && E1 != T1 && A1 != T1) {

                //digitize THAT
                T21 = THAT/1000;
                rem = THAT%1000;
                H2 = rem/100;
                rem = rem%100;
                A2 = rem/10;
                rem = rem%10;
                T22 = rem;

                if (T21 != H2 && T21 != A2 && H2 != A2 && H2 != T22 && A2 != T22) {

                    if (A1 == A2 && T1 == T21 && T1 == T22 && T21 == T22) {

                        APPLE = (EAT + THAT);

                        if (APPLE >= 10000 && APPLE <= 99999) {

                            //digitize APPLE
                            A3 = APPLE/10000;
                            rem = APPLE%10000;
                            P31 = rem/1000;
                            rem = rem%1000;
                            P32 = rem/100;
                            rem = rem%100;
                            L3 = rem/10;
                            rem = rem%10;
                            E3 = rem;

                            if (A3 == A1 && A3 == A2 && P31 == P32 && E3 == E1) {

                                cout << "EAT: " << EAT << endl;
                                cout << "THAT: " << THAT << endl;
                                cout << "APPLE: " << APPLE << endl;

                            }

                        }

                    }

                }

            }

        }

    }

    return 0;

}