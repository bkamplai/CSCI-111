#include <iostream>
using namespace std;
/*
******************************************************************
* Generate and odd-size side-length square (2-D) array
*  with its contour (4 sides ) starred.
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
	

	for(int i=0; i<SIDE_LEN; i++)
	{
		for(int j=0; j<SIDE_LEN; j++)
		{
			if(i EQUALTO 0 OR i EQUALTO SIDE_LEN-1)
			{
				arr[i][j] = '*';
			}
			else if(j EQUALTO 0 OR j EQUALTO SIDE_LEN-1)
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
	
	return 0;
}
