#include <iostream>
using namespace std;
/*
******************************************************************
* Generate and odd-size side-length square (2-D) array
*  with crossed (X-marked) stars. .
******************************************************************
*/
#define AND &&
#define OR ||
#define NOT_EQUAL_TO !=
#define EQUALTO ==

#define SIDE_LEN 9

int main()
{
	// create an empty odd-size 2D square array
	char arr[SIDE_LEN][SIDE_LEN];
	
	// Fill in the array with stars (asteisks) as follows:
	//    - Top and bottome rows fully starred.
	//    - For all the other rows, fill it with stars for the FIRST and the LAST elements ONLY.
	
	
	for(int i=0; i<SIDE_LEN; i++)
	{
		for(int j=0; j<SIDE_LEN; j++)
		{
			arr[i][j] = ' ';
		}
	}
	
	cout<<"\n\n\n\n\n";
	for(int i=0; i<SIDE_LEN; i++)
	{
		for(int j=0; j<SIDE_LEN; j++)
		{
			if(i EQUALTO SIDE_LEN-j-1 OR i EQUALTO j)
			{
				arr[i][j] = '*';
			}
		}
	}
	
	
	// Display the sqaure 2-D array.
	for(int i=0; i<SIDE_LEN; i++)
	{
		for(int j=0; j<SIDE_LEN; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n\n\n\n\n";
	
	return 0;
}
