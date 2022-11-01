#include <iostream>
using namespace std;
 
int fact(/*unsigned long long*/ int n)
{
    if ((n == 0)|| (n == 1))
        return 1;
	else
		return fact(n-1)*n;
}
 
int main ()
{
	cout<<"Enter an integer value to compute its Factorial:\n\n "; 
    /*unsigned long long*/ int n;
	cin>>n;
	
    cout<<"Factorial of "<<n<< " is "<<fact(n)<<"\n\n\n";
    return 0;
}
 