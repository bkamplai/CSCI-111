/*
###################################################################
# Program name: Project_2.cpp
# Author      : Brandon Kamplain
# Date written: Oct. 3, 2021
# Description : Program will generate 10 student's grades randomly
# then will output them into a histogram.
###################################################################
*/

#include <iostream>

// So we can get the randomness of the program.
#include <stdlib.h> /* srand, rand */
#include <time.h>


using namespace std;

// Size of the histogram
#define length 10


// Function prototypes
void init_matrix (char[][length]);
void display_matrix(char[][length]);

void hist_values(char[][length]);

void student_grades(char[][length]);

int main() {

    // creates an empty 2D square array
	char arr[length][length];
	int grade[length];
	
	//Initialize the array
	init_matrix(arr);

	//Inputs student's grades into the histogram
    hist_values(arr);

    // Display the 2-D array.
	display_matrix(arr);

	//Randomly generates student grades
	student_grades(arr);

    return 0;

}

// Function definitions:

// Initializes the matrix/array:
void init_matrix(char a[length][length]) {

	for(int i=0; i<length; i++) {

		for(int j=0; j<length; j++) {

			a[i][j] = ' ';

		}
	}
}

// Displays the matrix/array:
void display_matrix(char c[length][length]) {

	cout << endl;

	for(int i=0; i<length; i++) {
		
		for(int j=0; j<length; j++) {

			cout << c[i][j] << " | ";

		}

		cout << endl;

	}

    cout << "---------------------------------------" << endl;
    cout << "S1  S2  S3  S4  S5  S6  S7  S8  S9 S10" << endl;

}

//Takes the randomly generated grades and "plots" them into the histogram
void hist_values(char b[length][length]) {

	for (int i=length-1; i>0; i-- ) {

		for (int j=10 /*grade[i]*/; j>length-(i*2); j--) {

			b[i][j] = '*';

		}
	}
}

//Generates the grades
void student_grades(char d[length][length]) {

	int grade[length];

    srand (time(NULL));

    for (int i=0; i<length; i++) {

        grade[i] = 2 * ( (rand() % 6)  );
		
		switch (grade[i]) {
		
			case 0:
				cout << "F   ";
				break;
			case 2:
				cout << "E   ";
				break;
			case 4:
				cout << "D   ";
				break;
			case 6:
				cout << "C   ";
				break;
			case 8:
				cout << "B   ";
				break;
			case 10:
				cout << "A   ";
				break;
			
		}
    }

	cout << "\n\n";

	int grades = grade[length -1];

}