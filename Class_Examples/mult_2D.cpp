#include <iostream>

using namespace std;

int main() {

    int r1, c1, r2, c2, i, j, k;

    cout << "Enter number of rows for 1st matrix: ";
    cin >> r1;

    cout << "\nEnter number of columns for 1st matrix: ";
    cin >> c1;

    cout << "\nEnter number of rows for 2nd matrix: ";
    cin >> r2;

    cout << "\nEnter number of columns for 2nd matrix: ";
    cin >> c2;
    cout << endl;

    if (c1 != r2) {

        cout << "Must match column of the 1st matrix to the row of the 2nd matrix. Exiting...\n";
        exit(1);

    }

    int A[r1][c1], B[r2][c2], res[r1][c2];

    // Populate A matrix with 1's
    for (i = 0; i<r1; i++) {

        for (j = 0; j<c1; j++) {

            A[i][j] = 1;

        }

    }

    // Populate B matrix with 1's
    for (i = 0; i<r2; i++) {

        for (j = 0; j<c2; j++) {

            B[i][j] = 1;

        }

    }

    //Populate res matrix with 0's
    for (i = 0; i<r1; i++) {

        for (j = 0; j<c2; j++) {

            res[i][j] = 0;

        }

    }

    //The actual multiplication
    for (i = 0; i<r1; i++) {

        for (j = 0; j<c2; j++) {

            for (k=0; k<c1; k++) {

                //res[i][j] = res[i][j] + A[1][k]*B[k][j];
                res[i][j] =+ A[i][k]*B[k][j];

            }

        }

    }

    //Display res matrix
    for (i = 0; i<r1; i++) {

        for (j = 0; j<c2; j++) {

            cout << res[i][j] << " ";

        }

        cout << endl;

    }

    return 0;

}