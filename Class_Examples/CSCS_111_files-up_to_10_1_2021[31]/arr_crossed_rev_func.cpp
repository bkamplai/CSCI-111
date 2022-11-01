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

#define SIDE_LEN 19

void init_blanks(char[][SIDE_LEN]);
void fill_in_starts(char[][SIDE_LEN]);
void display_arr(char[][SIDE_LEN]);

int main()
{
	// create an empty odd-size 2D square array
	char arr[SIDE_LEN][SIDE_LEN];
	
	//Initialize the arry to blank characters
	init_blanks(arr);
	
	// Fill in the array with stars (asteisks) as follows:
	//    - Top and bottome rows fully starred.
	//    - For all the other rows, fill it with stars for the FIRST and the LAST elements ONLY.
	fill_in_starts(arr);
	
	// Display the sqaure 2-D array.
	display_arr(arr);
	
	return 0;
}

void init_blanks(char a[SIDE_LEN][SIDE_LEN])
{
	for(int i=0; i<SIDE_LEN; i++)
	{
		for(int j=0; j<SIDE_LEN; j++)
		{
			a[i][j] = ' ';
		}
	}
}

void fill_in_starts(char b[SIDE_LEN][SIDE_LEN])
{
	cout<<"\n\n\n\n\n";
	for(int i=0; i<SIDE_LEN; i++)
	{
		for(int j=0; j<SIDE_LEN; j++)
		{
			if(i EQUALTO SIDE_LEN-j-1 OR i EQUALTO j)
			{
				b[i][j] = '*';
			}
		}
	}
}

void display_arr(char c[SIDE_LEN][SIDE_LEN])
{
	for(int i=0; i<SIDE_LEN; i++)
	{
		for(int j=0; j<SIDE_LEN; j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n\n\n\n\n";
}

