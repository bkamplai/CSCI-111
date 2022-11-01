#include <iostream>
using namespace std;

/*
*
* Say, you like to write a program that passes arguments to the main function.

* The first and foremost issue is, how do you validate that a correct number of arguments are passed?
* Furthermore, how would you inform the person that wrong number of arguments are passed in and a hint how to correct it?
*/


// The program below specifies that there should be 3 arguments (parameters) should be passed in (i.e., "argc" of type integer
// should be 3. Invariably, the first argument is going to be - AT ALL TIMES, the program name followed by two additional arguments.
//
// The "argv" is a vector of strings with argv[0] as the program name,
//                                        argv[1] as the arg1,
//                                        argv[2] as the arg2,

// ALL arguments are passed in as STRINGS (i.e. array of characters - dont be misguided when you see numbers; thos number are of type characters!
//
int main(int argc, char* argv[])
// argc = argument count
// argv == argument vector
{
		if (argc != 3)
		{
			cout<<"\n\nIncorrect number of arguments. USAGE: passing_args_to_main_func value1 value2. Exiting...\n\n";
			exit(1);
		}
		long long int value_1 = atoi(argv[1]);
		long long int value_2 = atof(argv[2]);
		
		// To prove that value_1 and value_2 are of type "int" and "float", respectively, we multiply them and the result should
		// be arithmaticaaly, correct!
		cout<<"\n\nThe product of "<<value_1<<" and "<<value_2<<" is: "<<value_1 * value_2<<endl<<endl; 
		
		
		
		
	
	return 0;
}