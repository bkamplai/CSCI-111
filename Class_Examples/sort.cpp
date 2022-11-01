#include <iostream>

using namespace std;

#define GT >
#define LT <

int main() {

    int a[10] = {7, 9, 3, 8, 2, 5, 1, 0, 4, 6};

    int temp;

    for (int i=0; i<10; i++) {

        for (int j=i; j<10; j++) {

            //Sorts in ascending order
            //To sort in descending order, use "LT" compare operator
            if (a[i] GT a[j]) {

                temp = a[i]; //Save a[i]
                a[i] = a[j]; //swap a[i] and a[j]
                a[j] = temp; //the value of a[i] now in a[j]

            }

        }

    }

    cout << "\n\n\n\n\n";
    for (int i=0; i<10; i++) {

        cout << a[i] << " ";

    }

    cout << "\n\n\n\n\n";

}