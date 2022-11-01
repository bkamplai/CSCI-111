#include <iostream>

using namespace std;

int main() {

    cout << endl;

    int oneD [20] = {0};

    int twoD[5][4] = {0};

    for (int i=0; i<5; i++) {

        for (int j=0; j<4; j++) {

            twoD[i][j] = j+1+i*4;
            //cout << twoD[i][j] << " ";

            oneD[j+i*4] = twoD[i][j];
        
        }

    }

    for (int k=0; k<20; k++) {

        cout << oneD[k] << " ";

    }

    cout << endl << endl;

    return 0;
    
}