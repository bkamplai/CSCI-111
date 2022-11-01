#include <iostream>

using namespace std;

int main() {

    int oneD[15];
    int twoD[3][5];

    for (int i=0; i<15; i++) {

        oneD[i] = i+1;

    }

    /*for (int i=0; i<15; i++) {

        cout << oneD[i] << " ";

    }*/

    for (int i=0; i<3; i++) {

        for (int j=0; j<5; j++) {

            twoD[i][j] = oneD[(5*i)+j];

            cout << twoD[i][j] << " ";
        }

        cout << endl;

    }

    //Reset 1D array so to populate it using 2D array
    cout << endl;

    for (int k=0; k<15; k++) {

        oneD[k] = 0;
        cout << oneD[k] << " ";

    }

    for (int i=0; i<3; i++) {

        for (int j=0; j<5; j++) {

            oneD[(5*i)+j] = twoD[i][j];

        }

        cout << endl;

    }

    for (int k=0; k<15; k++) {

        cout << oneD[k] << " ";

    }

    cout << endl << endl;

    return 0;

}