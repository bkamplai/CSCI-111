/*
*****************************************************************
* Name of Program: digitize unknown number of inter.cpp
* Author: Seif Azghandi
* Date written: Aug 24, 2021
* Description: This program reads an integer value of unknown length
*              , digitizes it, and displays its respective digits.
*
*****************************************************************
*/

#include <iostream>
using namespace std;

int main()
{
	unsigned long long int int_valu;
	// prompt the user to enter an integer value of unknown length.
	cout<<"Please enter an integer value of unknown length, say, 8 digits"<<endl;
	cin>>int_valu;
	
	//Boundary condition check: a dummy case!
	if (int_valu/10 == 0)
	{
		cout<<"The digitized integer value for "<<int_valu <<" is "<<int_valu<<endl;
	}
	else
	{
		unsigned long long int ten_factors = 10;
		while(ten_factors/int_valu == 0)
		{
			ten_factors = ten_factors*10;
		}
		ten_factors = ten_factors/10;
		
		// Now that we have found the BIG DIVISOR, we can whittle down the integer value and display the digits
		// one at at the time.
		unsigned long long int rem = int_valu;
		int x;
		while(rem > 9)
		{
			x = rem/ten_factors;
			rem = rem%ten_factors;
			ten_factors = ten_factors/10;
			cout<<x<<" ";
		}
		x = rem;
		cout<<x<<endl;
	}
	return 0;
}