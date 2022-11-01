/*
###################################################################
# Program name: Project_4.cpp
# Author      : Brandon Kamplain
# Date written: Oct. 21, 2021
# Description : Program takes two integers from the main function
# and multiply them, then show the prodruct of the two.
###################################################################
*/

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

string multiply(string, string);

int main(int argc, char* argv[]) {

	//Makes sure all 3 argurments are present
    if (argc != 3) {

		cout<<"\n\nIncorrect number of arguments. USAGE: Project_4 value1 value2. Exiting...\n\n";

		exit(1);

	} else {

		char *num1, *num2;
		string numA, numB;

		//Converts the argv arguments into their own seperate arrays 
		if ( argc > 1 ) {

			num1 = (char *) malloc(strlen(argv[1])+1);
			strcpy(num1,argv[1]);

			num2 = (char *) malloc(strlen(argv[2])+1);
			strcpy(num2, argv[2]);

		}

		//Converts the new arrays into strings
		numA.append(num1);
		numB.append(num2);

		//
		if ((numA.at(0) == '-' || numB.at(0) == '-') && (numA.at(0) != '-' || numB.at(0) != '-' )) {
			
			cout<<"-";

		}
 
		if(numA.at(0) == '-') {
		
			numA = numA.substr(1);
		
		}
	
		if(numB.at(0) == '-') {
		
			numB = numB.substr(1);

		}

		cout << "\n\nThe product of " << numA << " and " << numB  << " is: " << multiply(numA, numB) << endl << endl; 
		

	}

    return 0;

}

// Multiplies str1 and str2, and prints result.
string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();

    if (len1 == 0 || len2 == 0) {

    	return "0";

	}

	//Keep the result in a vector in reverse order
    vector <int> result(len1 + len2, 0);
 
    //The two indecies are used to find positions in the result
    int i_n1 = 0;
    int i_n2 = 0;
     
    //Go from right to left in num1
    for (int i=len1-1; i>=0; i--) {

        int carry = 0;
        int n1 = num1[i] - '0';
 
        //Shift the position to left after every multiplication of a digit in num2
        i_n2 = 0;
         
        //Go from right to left in num2            
        for (int j=len2-1; j>=0; j--) {

            //Take the current digit of the second number
            int n2 = num2[j] - '0';
 
            //Multiply with the current digit of the first number and add to the result previously stored current position.
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
 
            //Carry for next iteration
            carry = sum/10;
 
            //Store the result
            result[i_n1 + i_n2] = sum % 10;
 
            i_n2++;

        }
 
        //Store the carry in next cell
        if (carry > 0) {

            result[i_n1 + i_n2] += carry;
 
		}

        //Shift the position to the left after every multiplication of a digit in num1.
        i_n1++;

    }
 
    //Ignore the 0's from the right
    int i = result.size() - 1;

	while (i>=0 && result[i] == 0) {
		
		i--;
 
	}

    //If all the nums were 0's, that means either both or one of num1 or num2 were 0
    if (i == -1) {
		
		return "0";
 
	}

    //Generate the result as a string
    string s = "";
     
    while (i >= 0) {
		
		s += std::to_string(result[i--]);
 
	}

    return s;

}