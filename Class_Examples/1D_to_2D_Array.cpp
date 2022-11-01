#include <iostream>

using namespace std;

int main() {

    int oneD [20] = {0};

    for (int i = 0; i < 20; i++) {

        oneD[i] = i+1;

    }

    int twoD[5][4] = {0};

    for (int i=0; i<5; i++) {

        for (int j=0; j<4; j++) {

            twoD[i][j] = oneD[j+i*4];
            cout << twoD[i][j] << " ";

        }

        cout << endl;

    }

    return 0;
    
}