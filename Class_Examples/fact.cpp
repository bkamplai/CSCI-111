#include <iostream>

using namespace std;

int fact(int);

int main() {

    int fact_num;
    cout << "Enter an integer value for which to compute its factorial: ";
    cin >> fact_num;

    cout << "Factorial of " << fact_num << " is " << fact(fact_num) << "\n\n\n";

    return 0;
    
}

int fact(int n) {

    if ((n==0) || (n==1))
        return 1;
    else
        return fact(n-1)*n;

}