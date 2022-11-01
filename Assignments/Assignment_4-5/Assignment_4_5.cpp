/*
###################################################################
# Program name: assignment_4_5.cpp
# Author      : Brandon Kamplain
# Date written: Nov. 16, 2021
# Description : This program simulates a flight ticket boarding
# process by taking information from an input file.
###################################################################
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct cust_info {

    string cust_lastname;
    string cust_city_residence;
    string destination;
    string date_of_depart;
    string cust_seat;

};

// A date has day 'd', month 'm' and year 'y'
struct Date {

    int d, m, y;

};
 
// To store number of days in all months from January to Dec.
const int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Functions to check conditionals
void loadData(char [][5]);
void check_lastname(string);
void check_flight_dates(string);
void check_addresses(string, string);
void check_dest(string);
void overbook(string, string, char [][5]);

//Functions to used to determine the dates between flights
int countLeapYears(Date);
int getDifference(Date, Date);

//Functions to displau seats from flight
void init_blanks(char [][5]);
void display_seats(char [][5]);


int main() {

	char seats[5][5];
	
	ofstream ErrorFile("errorfile.txt");

	loadData(seats);
	init_blanks(seats);
	//display_seats(seats);
	

	ErrorFile.close();
    return 0;
    
}

void loadData(char seats[5][5]) {

    ifstream  ifs("inputfile.txt"); //open file

    string lastname, cityResidence, dest, date, seat;	//making some local string equivalents
	
	struct cust_info records[256];

    if(ifs.fail()) {

		ofstream ErrorFile("errorfile.txt", ios::app);

        cout << "\nError opening input file (inputfile.txt) Exiting...\n\n";

		ErrorFile << "Could not open input file.";

		ErrorFile.close();
		exit(1);

     }

	int i =0;
	while(! ifs.eof()) {

     	ifs >> lastname >> cityResidence >> dest  >> date >> seat; //reading what's in the file to some rando strings

		records[i].cust_lastname = lastname;	//making said random strings equal to the struct
		records[i].cust_city_residence = cityResidence;
		records[i].destination = dest;
		records[i].date_of_depart = date;
		records[i].cust_seat = seat;

		i++;

		check_lastname(lastname);
		check_flight_dates(date);
		check_addresses(dest, cityResidence);
		check_dest(dest);
		overbook(date, seat, seats);
		

	}

}

void check_lastname(string lastname) {

	//Need to find a way to create a temp string to compare last names

	/*
	if (destination is the same) {

		if (lastname is the same) {

			ofstream ErrorFile("errorfile.txt", ios::app);

			ErrorFile << "No duplicate customer's lastname is allowed for the same destination flight.\n\n";

			ErrorFile.close();

		}
	
	}
	*/

}
//Function definitions to determine dates between flights
// This function counts number of leap years before the given date
int countLeapYears(Date d) {

    int years = d.y;
 
    // Check if the current year needs to be considered for the count of leap years or not
    if (d.m <= 2) {

        years--;
    
    }

    // An year is a leap year if it is a multiple of 4, multiple of 400 and not a multiple of 100.
    return years / 4 - years / 100 + years / 400;

}

// This function returns number of days between two given dates
int getDifference(Date dt1, Date dt2) {
    
    // COUNT TOTAL NUMBER OF DAYS BEFORE FIRST DATE 'dt1'
 
    // initialize count using years and day
    long int n1 = dt1.y * 365 + dt1.d;
 
    // Add days for months in given date
    for (int i = 0; i < dt1.m - 1; i++) {
    
        n1 += monthDays[i];

    }

    // Since every leap year is of 366 days, adds a day for every leap year
    n1 += countLeapYears(dt1);
 
    // SIMILARLY, COUNT TOTAL NUMBER OF DAYS BEFORE 'dt2'
 
    long int n2 = dt2.y * 365 + dt2.d;

    for (int i = 0; i < dt2.m - 1; i++) {
    
        n2 += monthDays[i];
    }

    n2 += countLeapYears(dt2);
 
    // return difference between two counts
    return (n2 - n1);

}

void check_flight_dates(string date) {

	int a,b,c,d,e,f,g,h,A,B,C,D,E,F,G,H,M1,M2,D1,D2,Y1,Y2;

	a = date[0]; //M
	b = date[1]; //M
	c = date[3]; //D
	d = date[4]; //D
	e = date[6]; //Y
	f = date[7]; //Y
	g = date[8]; //Y
	h = date[9]; //Y

	switch (a) {
	
		case 48:
			a = a*0;
			break;
		case 49:
			a = a/49;
			break;
		case 50:
			a = a/25;
			break;
		case 51:
			a = a/17;
			break;
		case 52:
			a = a/13;
			break;
		case 53:
			a = a/10;
			break;
		case 54:
			a = a/9;
			break;
		case 55:
			a = a/7;
			break;
		case 56:
			a = a/7;
			break;
		case 57:
			a = a*6;
			break;
	
	}

	switch (b) {
	
		case 48:
			b = b*0;
			break;
		case 49:
			b = b/49;
			break;
		case 50:
			b = b/25;
			break;
		case 51:
			b = b/17;
			break;
		case 52:
			b = b/13;
			break;
		case 53:
			b = b/10;
			break;
		case 54:
			b = b/9;
			break;
		case 55:
			b = b/7;
			break;
		case 56:
			b = b/7;
			break;
		case 57:
			b = b*6;
			break;
	
	}

	switch (c) {
	
		case 48:
			c = c*0;
			break;
		case 49:
			c = c/49;
			break;
		case 50:
			c = c/25;
			break;
		case 51:
			c = c/17;
			break;
		case 52:
			c = c/13;
			break;
		case 53:
			c = c/10;
			break;
		case 54:
			c = c/9;
			break;
		case 55:
			c = c/7;
			break;
		case 56:
			c = c/7;
			break;
		case 57:
			c = c*6;
			break;
	
	}

	switch (d) {
	
		case 48:
			d = d*0;
			break;
		case 49:
			d = d/49;
			break;
		case 50:
			d = d/25;
			break;
		case 51:
			d = d/17;
			break;
		case 52:
			d = d/13;
			break;
		case 53:
			d = d/10;
			break;
		case 54:
			d = d/9;
			break;
		case 55:
			d = d/7;
			break;
		case 56:
			d = d/7;
			break;
		case 57:
			d = d*6;
			break;
	
	}

	switch (e) {
	
		case 48:
			e = e*0;
			break;
		case 49:
			e = e/49;
			break;
		case 50:
			e = e/25;
			break;
		case 51:
			e = e/17;
			break;
		case 52:
			e = e/13;
			break;
		case 53:
			e = e/10;
			break;
		case 54:
			e = e/9;
			break;
		case 55:
			e = e/7;
			break;
		case 56:
			e = e/7;
			break;
		case 57:
			e = e*6;
			break;
	
	}

	switch (f) {
	
		case 48:
			f = f*0;
			break;
		case 49:
			f = f/49;
			break;
		case 50:
			f = f/25;
			break;
		case 51:
			f = f/17;
			break;
		case 52:
			f = f/13;
			break;
		case 53:
			f = f/10;
			break;
		case 54:
			f = f/9;
			break;
		case 55:
			f = f/7;
			break;
		case 56:
			f = f/7;
			break;
		case 57:
			f = f*6;
			break;
	
	}

	switch (g) {
	
		case 48:
			g = g*0;
			break;
		case 49:
			g = g/49;
			break;
		case 50:
			g = g/25;
			break;
		case 51:
			g = g/17;
			break;
		case 52:
			g = g/13;
			break;
		case 53:
			g = g/10;
			break;
		case 54:
			g = g/9;
			break;
		case 55:
			g = g/7;
			break;
		case 56:
			g = g/7;
			break;
		case 57:
			g = g*6;
			break;
	
	}

	switch (h) {
	
		case 48:
			h = h*0;
			break;
		case 49:
			h = h/49;
			break;
		case 50:
			h = h/25;
			break;
		case 51:
			h = h/17;
			break;
		case 52:
			h = h/13;
			break;
		case 53:
			h = h/10;
			break;
		case 54:
			h = h/9;
			break;
		case 55:
			h = h/7;
			break;
		case 56:
			h = h/7;
			break;
		case 57:
			h = h*6;
			break;
	
	}

	switch (A) {
	
		case 48:
			A = A*0;
			break;
		case 49:
			A = A/49;
			break;
		case 50:
			A = A/25;
			break;
		case 51:
			A = A/17;
			break;
		case 52:
			A = A/13;
			break;
		case 53:
			A = A/10;
			break;
		case 54:
			A = A/9;
			break;
		case 55:
			A = A/7;
			break;
		case 56:
			A = A/7;
			break;
		case 57:
			A = A*6;
			break;
	
	}

	switch (B) {
	
		case 48:
			B = B*0;
			break;
		case 49:
			B = B/49;
			break;
		case 50:
			B = B/25;
			break;
		case 51:
			B = B/17;
			break;
		case 52:
			B = B/13;
			break;
		case 53:
			B = B/10;
			break;
		case 54:
			B = B/9;
			break;
		case 55:
			B = B/7;
			break;
		case 56:
			B = B/7;
			break;
		case 57:
			B = B*6;
			break;
	
	}

	switch (C) {
	
		case 48:
			C = C*0;
			break;
		case 49:
			C = C/49;
			break;
		case 50:
			C = C/25;
			break;
		case 51:
			C = C/17;
			break;
		case 52:
			C = C/13;
			break;
		case 53:
			C = C/10;
			break;
		case 54:
			C = C/9;
			break;
		case 55:
			C = C/7;
			break;
		case 56:
			C = C/7;
			break;
		case 57:
			C = C*6;
			break;
	
	}

	switch (D) {
	
		case 48:
			D = D*0;
			break;
		case 49:
			D = D/49;
			break;
		case 50:
			D = D/25;
			break;
		case 51:
			D = D/17;
			break;
		case 52:
			D = D/13;
			break;
		case 53:
			D = D/10;
			break;
		case 54:
			D = D/9;
			break;
		case 55:
			D = D/7;
			break;
		case 56:
			D = D/7;
			break;
		case 57:
			D = D*6;
			break;
	
	}

	switch (E) {
	
		case 48:
			E = E*0;
			break;
		case 49:
			E = E/49;
			break;
		case 50:
			E = E/25;
			break;
		case 51:
			E = E/17;
			break;
		case 52:
			E = E/13;
			break;
		case 53:
			E = E/10;
			break;
		case 54:
			E = E/9;
			break;
		case 55:
			E = E/7;
			break;
		case 56:
			E = E/7;
			break;
		case 57:
			E = E*6;
			break;
	
	}

	switch (F) {
	
		case 48:
			F = F*0;
			break;
		case 49:
			F = F/49;
			break;
		case 50:
			F = F/25;
			break;
		case 51:
			F = F/17;
			break;
		case 52:
			F = F/13;
			break;
		case 53:
			F = F/10;
			break;
		case 54:
			F = F/9;
			break;
		case 55:
			F = F/7;
			break;
		case 56:
			F = F/7;
			break;
		case 57:
			F = F*6;
			break;
	
	}

	switch (G) {
	
		case 48:
			G = G*0;
			break;
		case 49:
			G = G/49;
			break;
		case 50:
			G = G/25;
			break;
		case 51:
			G = G/17;
			break;
		case 52:
			G = G/13;
			break;
		case 53:
			G = G/10;
			break;
		case 54:
			G = G/9;
			break;
		case 55:
			G = G/7;
			break;
		case 56:
			G = G/7;
			break;
		case 57:
			G = G*6;
			break;
	
	}

	switch (H) {
	
		case 48:
			H = H*0;
			break;
		case 49:
			H = H/49;
			break;
		case 50:
			H = H/25;
			break;
		case 51:
			H = H/17;
			break;
		case 52:
			H = H/13;
			break;
		case 53:
			H = H/10;
			break;
		case 54:
			H = H/9;
			break;
		case 55:
			H = H/7;
			break;
		case 56:
			H = H/7;
			break;
		case 57:
			H = H*6;
			break;
	
	}

	M1 = (a*10) + b;
	M2 = (A*10) + B;

	D1 = (c*10) + d;
	D2 = (C*10) + D;

	Y1 = (e*1000) + (f*100) + (g*10) + h;
	Y2 = (E*1000) + (F*100) + (G*10) + H;

	//Find a way to create temp strings/arrays to compare last names and dates

	/*
	if (lastname is the same) {

		ofstream ErrorFile("errorfile.txt", ios::app);

		Date dt1 = {D1, M1, Y1};
	    Date dt2 = {D2, M2, Y2};

		if ((getDifference(dt1, dt2)) > 0 && (getDifference(dt1, dt2)) < 5) {

			ErrorFile << "Customer's flights must be at least 5 days or more apart.\n\n";

		} else if ((getDifference(dt1, dt2)) < 0) {

			ErrorFile << "Second flight must be made 5 days or more from the first flight.\n";

		}

		ErrorFile.close();

	}
	*/

}

void check_addresses(string dest, string cityResidence) {

	if (dest == cityResidence) {

		ofstream ErrorFile("errorfile.txt", ios::app);

		ErrorFile << "Customer's residential address and destination can't be the same.\n";

		ErrorFile.close();

	}

}

void check_dest(string dest) {

	if (dest != "SF" && dest != "LA" && dest != "NY") {

		ofstream ErrorFile("errorfile.txt", ios::app);

		ErrorFile << "Destination flight must either be SF, LA, or NY.\n";

		ErrorFile.close();

	}

}

void overbook(string date, string seat, char seats[5][5]) {

	/*
	//Check dates
	if (dates are the same) {

		//Check seats
		if (seats are the same) {

		ofstream ErrorFile("errorfile.txt", ios::app);

		ErrorFile << "Seat is already taken, please choose a different seat\n";

		ErrorFile.close();

		}

	}
	*/



}

void init_blanks(char a[5][5])
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			a[i][j] = ' ';
		}
	}
}

void display_seats(char c[5][5])
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			cout<<c[i][j]<<"|_";
		}
		cout<<endl;
	}
	cout<<"\n\n\n\n\n";
}