#include <iostream>
#include <ctime>

using namespace std;

#define max_num 100

int main() {

    clock_t begin, end;
    //int i,j;

    cout << "Generating prime number: " << endl;

    begin = clock();

    for (int i=2; i<=max_num; i++) {

        int ctr=0;
        for (int j=1; j<=i; j++) {

            if (i%j==0) {

                ctr ++;

            }

        }

        if (ctr==2) {

            cout << i << " ";

        }

    }
    end = clock();

    cout << endl << endl;

    cout << " time it took (in sec's) to generate PN's: " << (end-begin)/CLOCKS_PER_SEC;

    cout << endl << endl;

    return 0;

}
