#include <iostream>
using namespace std;
/*
*****************************
* Proving whether a square matrix is magic squre.
* 
*****************************
*/
#define EQUALTO ==

int main()
{
    	//int arr[3][3] = {{8,1,6},{3,5,7},{4,9,2}}; // This is a magic sqaure.
		int arr[3][3] = {{8,1,6},{3,5,7},{4,9,5}}; // This is a test for NOT magic sqaure.
		
	//int i,j;
	int row1=0,row2=0,row3=0;
	int col1=0,col2=0,col3=0;
	int diag_up=0,diag_down=0;

	cout<<"\n\n\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			//Do row operations
			if (i EQUALTO  0)
				row1 = row1 + arr[i][j];
			else if(i EQUALTO  1)
				row2 = row2 + arr[i][j];
			else if(i EQUALTO  2)
				row3 = row3 + arr[i][j];

			//Do column operations
			if (j EQUALTO  0)
				col1 = col1 + arr[i][j];
			else if(j EQUALTO  1)
				col2 = col2 + arr[i][j];
			else if(j EQUALTO  2)
				col3 = col3 + arr[i][j];

			//Do diagonal operations
			if(i EQUALTO j)
				diag_down = diag_down + arr[i][j];
			else if(i EQUALTO  j+2 || j EQUALTO  i+2)
			{
				diag_up = diag_up + arr[i][j];
				if(i EQUALTO j+2)
					diag_up = diag_up+arr[1][1];
			}
		}
	}
	
	cout<<"\n\n\n\n\n";
	
	for (int i=0; i<3;i++)
	{
		for (int j=0; j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n\n\n\n\n";
	
	if ((row1+row2+row3+col1+col2+col3+diag_down+diag_up)%15==0)
		cout<<"This matrix is a magic square.\n\n\n";
	else
		cout<<"This matrix is NOT a magic square.\n\n\n";

	return 0;
}
