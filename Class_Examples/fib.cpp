#include <iostream>

using namespace std;

int fib(int);

int main() {

    int fib_num;
    cout << "Enter an integer value for which to compute its fibonacci: ";
    cin >> fib_num;

    cout << "Fibonacci of " << fib_num << " is " << fib(fib_num) << "\n\n\n";

    return 0;
    
}

int fib(int n) {

    if (n==0)
        return n;
    else if (n==1)
        return n;
    else
        return fib(n-1) + fib(n-2);

}