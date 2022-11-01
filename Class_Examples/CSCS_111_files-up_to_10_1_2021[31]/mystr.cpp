#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	// Create an array of characters (string) and initialize it.
	char aStr[] = "hello";

	// Display the char array (string)

 	cout<<"\n\n\n\n\n\n\n";
	cout<<aStr<<endl;
 	cout<<"\n\n\n\n\n\n\n";

	//
	// Display the 2nd character (letter, "e").
	// Notice that 2nd character has index of 1
	// because the 1st character has index of 0.
	//

	cout<<"\n\n\n\n\n\n\n";
	cout<<aStr[1]<<endl;
	cout<<"\n\n\n\n\n\n\n";

	// Lets display the length of "hello" string

	cout<<"\n\n\n\n\n\n\n";
	cout<<strlen(aStr)<<endl;
	cout<<"\n\n\n\n\n\n\n";

	//
	// Lets display the orioginal string ("hello") in reverse.
	//
	cout<<"\n\n\n\n\n\n\n";

	for(int i=strlen(aStr)-1;i>=0; i--)
		cout<<aStr[i];

	cout<<"\n\n\n\n\n\n\n";
	

	return 0;
}