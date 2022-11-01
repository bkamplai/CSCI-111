//
//
//
//
//                            C O D E      P O R T A B I L I T Y
//                            -----------------------------------
//


#include <iostream>
#include <cmath>
using namespace std;


//
// Functions' prototypes.
//
void display_heading();
void calc_area_cir_and_display(float);
float calc_area_cir(float);



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
	
	vol_cyl = calc_area_cir(radius)*height_of_cyl;          // Call (invoke) type3 function
	cout<<"Volume of a cyclinder with radius "<<radius<<" and height "<<height_of_cyl<< " is "<<vol_cyl<<endl;
	cout<<endl<<endl;
	
	return 0;
}




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
float calc_area_circle(float radius)
{
	float area = 0.0;
	
	cout<<"type3 function ..."<<endl<<endl;
	cout<<"This function calculates area of a circle given its radius ..."<<endl;
	area = pow(radius,2)*3.14;
	return area;
}




