#include <iostream>

using namespace std;

#define AND &&
#define OR ||
#define NOT_EQUAL_TO !=
#define EQUAL_TO ==
#define GT >
#define LT <

#define SIZE_LEN 9

int main() {

    char arr[SIZE_LEN][SIZE_LEN];

    // initialize array to blanks
    for (int i=0; i<SIZE_LEN; i++) {

        for (int j=0; j<SIZE_LEN; j++) {

            arr[i][j]= ' ';

        }

    }

    for (int i=0; i<SIZE_LEN; i++) {

        for (int j=0; j<SIZE_LEN; j++) {

            if (i==0 || i==SIZE_LEN-1) {

                arr[i][j]= '*';
                cout << arr[i][j] << " ";

            } else {

                if (j==0 || j==SIZE_LEN-1) {

                    arr[i][j]= '*';

                }

                cout << arr[i][j] << " ";

            }

        }

        cout << endl;

    }

    return 0;

}