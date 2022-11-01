#include <iostream>

using namespace std;

#define len 29

void blankout(char[][len]);
void form_pattern(char [][len]);
void display(char[][len]);

int main() {

    char sq[len][len];

    blankout(sq);
    form_pattern(sq);
    display(sq);

    return 0;

}

void blankout (char a[len][len]) {

    for (int i=0;i<len;i++) {

        for (int j=0;j<len;j++) {

            a[i][j] = ' ';

        }

    }

}

void form_pattern (char c[len][len]) {

    for (int i=0;i<len;i++) {

        for (int j=0;j<len;j++) {

            if (j==len/2-i || i==j+len/2 || j==len-1+len/2-i || len-1+i==len-1-len/2+j || j==len/2 || i==len/2) {

                c[i][j] = '*';

            }

        }

    }

}

void display (char b[len][len]) {

    cout << endl << endl;

    for (int i=0;i<len;i++) {

        cout << "\t\t"; // "\t" = tab

        for (int j=0;j<len;j++) {

            cout << b[i][j];

        }

        cout << endl;

    }

    cout << endl << endl;

}