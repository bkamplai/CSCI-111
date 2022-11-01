/*
###################################################################
# Program name: assignment_2.cpp
# Author      : Brandon Kamplain
# Date written: Sep. 25, 2021
# Description : Program will generate a triangle shape, randomly
# appearing either on the left, right, top, or bottom.
###################################################################
*/

#include <iostream>

// So we can get the randomness of the program.
#include <stdlib.h> /* srand, rand */
#include <time.h>


using namespace std;

// Starting length of the triangle:
// Can change to be any ODD number
#define LENGTH 13

// Function prototypes:
void init_matrix (char[][LENGTH]);

void display_matrix(char[][LENGTH]);

void side_left(char[][LENGTH]);
void side_right(char[][LENGTH]);
void side_top(char[][LENGTH]);
void side_bottom(char[][LENGTH]);

int main() {

    // creates an empty 2D square array
	char arr[LENGTH][LENGTH];
	
	//Initialize the array
	init_matrix(arr);

	// Randomly generates which side to output
	srand (time(NULL));
	int rand_val = rand()%4;

	switch (rand_val) {

		case 0:
			side_top(arr);
			break;
		case 1:
			side_bottom(arr);
			break;
		case 2:
			side_left(arr);
			break;
		case 3:
			side_right(arr);
			break;

	}

    // Display the 2-D array.
	display_matrix(arr);
    
    return 0;

}

// Function definitions:

// Initializes the matrix/array:
void init_matrix(char a[LENGTH][LENGTH]) {

	for(int i=0; i<LENGTH; i++) {

		for(int j=0; j<LENGTH; j++) {

			a[i][j] = ' ';

		}
	}
}

// Displays the matrix/array:
void display_matrix(char c[LENGTH][LENGTH]) {

	cout << endl;

	for(int i=0; i<LENGTH; i++) {
		
		for(int j=0; j<LENGTH; j++) {

			cout << c[i][j] << " ";

		}

		cout << endl;

	}

	cout << endl;

}

// Side 1/4, makes triangle output from the left
void side_left(char f[LENGTH][LENGTH]) {

	for (int i=0; i<LENGTH/2+1; i++ ) {

		for (int j=i; j<LENGTH-i; j++) {

			f[j][i] = '*';

		}
	}
}

// Side 2/4, makes triangle output from the right
void side_right(char e[LENGTH][LENGTH]) {

	//call left function
	//start with j
	for (int i=LENGTH-1; i>0; i-- ) {

		for (int j=i; j>LENGTH-(i+2); j--) {

			e[j][i] = '*';

		}
	}
}

// Side 3/4, makes triangle output from the top
void side_top(char d[LENGTH][LENGTH]) {

	for (int i=0; i<LENGTH/2+1; i++ ) {

		for (int j=i; j<LENGTH-i; j++) {

			d[i][j] = '*';

		}
	}
}

// Side 4/4, makes triangle output from the bottom
void side_bottom(char b[LENGTH][LENGTH]) {

	//call top function
	//i starts with LENGTH-1
	for (int i=LENGTH-1; i>0; i-- ) {

		for (int j=i; j>LENGTH-(i+2); j--) {

			b[i][j] = '*';

		}
	}
}