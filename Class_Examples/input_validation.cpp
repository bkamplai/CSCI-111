#include <iostream>

using namespace std;

int main() {

    int side;
    cout << "Input the odd side of a square: ";
    cin >> side;

    /*if (side%2 == 0) {

        cout << "The provided input is NOT an odd value. Exiting the program..." << endl;
        exit(1);

    }*/

    while (side%2 == 0) {

        cout << "The provided input is NOT an odd value. Try again or enter -1 to exit." << endl;
        cin >> side;

        if (side == -1) {
            cout << "Exiting..." << endl;
            exit(1);
        }

    }

    //cout << "End of the program." << endl;

    return 0;

}