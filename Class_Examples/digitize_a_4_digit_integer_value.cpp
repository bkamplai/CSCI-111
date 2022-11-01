/*
*****************************************************************
* Name of Program: digitize_a_4_digit_integer_value.cpp
* Author: Seif Azghandi
* Date written: Aug 24, 2021
* Description: This program uses a 4-digit integer value 
*              and breaks that value into its respective digits
*              For example, 4-digit value, 5297 would be digitized
*			   into 5, 2, 9, 7. The seperated digits will be stored
*              in 4 different integer variables and will be displayed
*              as a proof of success.
*
*****************************************************************
*/

#include <iostream>

using namespace std; // organizes the code into logical groups; prevents name collisions
                     // in case of using different libraries that could potentially cause
                     //  name collision.

int main()
{
	// This is the integer value that we will break into its respective digits.
	int int_valu = 6183;
	
	// We will store the thousandth, hundredth, tenth, and unit, digits into 
	// t, h, n, and u, respectively.
	
	int t,h,n,u, rem;
	
	// Capture the quotient part of the integer value
	t = int_valu/1000;
	// Capture the remainder part after the integer division and update the remainder
	// to represent the modified integer value
	rem = int_valu%1000;
	
	
	// Capture the quotient part of the integer value
	h = rem/100;
	// Capture the remainder part after the integer division and update the remainder
	// to represent the modified integer value
	rem = rem%100;
	
	
	// Capture the quotient part of the integer value
	n = rem/10;
	// Capture the remainder part after the integer division and update the remainder
	// to represent the modified integer value
	rem = rem%10;

	u = rem;
	
	cout<<"The thousandth, hundredth, tenth, and unit digits of "<<int_valu<<" are "<<t<<", "<<h<<", "<<n<<" and "<<u<<", respectively."<<endl;
	
	
}
