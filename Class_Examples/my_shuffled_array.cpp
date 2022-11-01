#include <iostream>
#include <time.h>

using namespace std;

int main() {

    srand(time(NULL));

    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    cout << endl << endl;
    int temp=0;
    //int rand_idx;
    for (int i=0;i<10;i++) {


        temp = a[i];
        int rand_idx = rand()%10;
        a[i] = a[rand_idx];
        a[rand_idx] = temp;
        rand_idx = 0;
        //cout << endl;

    }

    for (int i=0; i<10; i++) {

        cout << a[i] << " ";

    }

    cout << endl << endl;

    return 0;

}