/*
**********************************
* Functions
* ----------
*
* Functions are ways of breaking a program into logically related groups of lines.
* In that sense "functions" are abstractions of some reality.
* In general, functions could contain other functions in many different layers of programs.
* Follwing this view, your "main" function is the ultimate function that embraces ALL your functions.
*
*
* Anatomy of a function
* ---------------------
*
*         1) Function has a label (name - just like a memory vriable)
*         2) Function's name follows - AT THE MINIMUM, with a pair of open/close panathesis
*            2.1) Functions could (optionally) have one or many arguments (variables) within a pair of parathesis.
*         3) Functions have return types - much like a memory that has an associated type (e.g., integer)
*            3.1) return types are the same as variable types including "void" (meaning function does not return a value).
*         4) function's implementation is captured WITHIN a pair of open/close paranthesis - much like the "main" function.          
* 
* Functions fall into 3 types/categories:
* ---------------------------------------
* 
*    Type 1: Does not take any arguments and does not return a value
*    -------
* 
*        void func_1()
*        {
*          cout<<"more lines of code ..."<<endl;
*          :
*          :
*        }
*
*    Type 2: Takes one or many arguments and does not return a value
*    -------
* 
*        void func_2(int a, float b, char c)
*        {
*          cout<<"more lines of code ..."<<endl;
*          :
*          :
*        }
*
*    Type 3: Takes one or many arguments and returns a value
*    -------
* 
*        int func_3(int a, float b, char c)
*        {
*          cout<<"more lines of code ..."<<endl;
*          :
*          :
*		   return 5;
*        }
**********************************
*
*  Functions are "called" (invoked) by either "main" function or other functions.
*/

// Here is an example code:

#include <iostream>
#include <cmath>
using namespace std;


// type1 function
void display_heading()
{
	cout<<endl<<endl<<endl;
	cout<<"type1 function ..."<<endl<<endl;
	cout<<"This is line 1 of heading ..."<<endl;
	cout<<"This is line 2 of heading ..."<<endl;
	cout<<"This is line 3 of heading ..."<<endl;
	cout<<endl<<endl<<endl;	
	// you could add more lines of code ...
}

// type2 function
void calc_area_cir_and_display(float radius)
{
	cout<<"type2 function ..."<<endl<<endl;
	cout<<"This function calculates area of a circle given its radius ..."<<endl;
	float area_cir = pow(radius,2)*3.14;
	cout<<"Area of a circle with radius "<<radius<<" is "<<area_cir<<endl;
	// you could add more lines of code ...	
}

// type3 function
float calc_area_cir(float radius)
{
	cout<<"type3 function ..."<<endl<<endl;
	cout<<"This function calculates area of a circle given its radius ..."<<endl;
	float area_cir = pow(radius,2)*3.14;
	// you could add more lines of code ...	
	return area_cir;
}

int main()
{
	display_heading();               // Call (invoke) type1 function
	cout<<endl<<endl;
	
	calc_area_cir_and_display(3.0);  // Call (invoke) type2 function
	cout<<endl<<endl;
	                                 // Call (invoke) type3 function
	
	float radius = 3.0;
	float height_of_cyl = 5.0;
	float vol_cyl= 0;
	
	vol_cyl = calc_area_cir(radius)*height_of_cyl;          // Call (invoke) to type3 function
	cout<<"Volume of a cyclinder with radius "<<radius<<" and height "<<height_of_cyl<< " is "<<vol_cyl<<endl;
	cout<<endl<<endl;
	
	return 0;
}
