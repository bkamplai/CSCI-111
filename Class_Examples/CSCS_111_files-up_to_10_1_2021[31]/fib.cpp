#include <iostream>
using namespace std;
 
int fib(int n)
{
    if (n == 0)
        return n;
	else if (n == 1)
		return n;
	else
		return fib(n-1) + fib(n-2);
}
 
int main ()
{
	cout<<"Enter an integer value to compute its Fibonacci:\n\n "; 
    int n;
	cin>>n;
	
    cout<<"Fibonacci of "<<n<< " is "<<fib(n)<<"\n\n\n";
    return 0;
}
 