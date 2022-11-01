#include <iostream>
using namespace std;

void display_arr(unsigned long long int[],int);
void fib_arr(unsigned long long int[],int);

int main()
{
	int num;
	cout<<" Enter an integer value for which to compute its fibonacci values\n\n";
	cin>>num;
	
	unsigned long long int arr[num] = {999};
	
	// Generate arbitrary number of Fibonacci values.
	fib_arr(arr,num);
	
	// Display the Fibonacci values.	
	display_arr(arr,num);
	
	return 0;
}

void display_arr(unsigned long long int a[],int num)
{
	cout<<"\n\n";
	for(int i=0; i<num;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n\n\n";
}

void fib_arr(unsigned long long int a[],int num)
{
	a[0] = 0;
	a[1] = 1;
	for(int i=2; i<num;i++)
	{
		if(a[i] == -999)
			break;
		else
			a[i] = a[i-1]+ a[i-2];
	}
}