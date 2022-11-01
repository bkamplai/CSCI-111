/*
************************************
* Shuffles an order sequentional set
************************************
*/


#include <iostream>
#include <cmath>
using namespace std;

#define LEN_ARR 16

//
// Functions' prototypes.
//
void create_ordered_arr(int[]);
void shuffle_arr(int[]);
void display_arr(int[]);
void sort_arr(int[]);


int main()
{
	int arr[LEN_ARR];
	create_ordered_arr(arr);
	shuffle_arr(arr);
	display_arr(arr);
	
	
	cout<<"\n\n\n\n\n";
	
	sort_arr(arr);
	cout<<"\n\n\n\n\n";	
	display_arr(arr);
	cout<<"\n\n\n\n\n";	

	
	return 0;
}

void create_ordered_arr(int b[LEN_ARR])
{
	for (int i=0; i<LEN_ARR;i++)
		b[i] = i+1;
}

void shuffle_arr(int d[LEN_ARR])
{
	int temp, rand_index;
	srand(time(0));
	for (int j=0; j<LEN_ARR;j++)
	{	
		rand_index = rand()%16;
		
		// Swap routine; could turn into another function
		// but maybe confusing.
		temp = d[j];
		d[j] = d[rand_index];
		d[rand_index] = temp;
	}
}


void display_arr(int c[LEN_ARR])
{
	cout<<"\n\n\n\n\n";
	for (int i=0; i<LEN_ARR; i++)
		cout<<c[i]<<" ";
	cout<<"\n\n\n\n\n";
}


void sort_arr(int p[LEN_ARR])
{
	int temp;
	for (int i=0; i<LEN_ARR;i++)
	{
		for(int j=i; j<LEN_ARR;j++)
		{
			if(p[i]>p[j])
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
}





