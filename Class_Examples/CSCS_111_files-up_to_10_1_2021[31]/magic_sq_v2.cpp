#include <iostream>
using namespace std;
/*
*****************************
* Proving whether a square matrix is magic squre.
* 
*****************************
*/
#define EQUALTO ==
#define SIDE_LEN 3

int main()
{
    	//int arr[3][3] = {{8,1,6},{3,5,7},{4,9,2}}; // This is a magic sqaure.
		int arr[SIDE_LEN][SIDE_LEN] = {{8,1,6},{3,5,7},{4,9,2}}; // This is a test for NOT magic sqaure.
		
	//int i,j;
	int row[SIDE_LEN];
	int col[SIDE_LEN];
	int diag_up=0,diag_down=0;

	cout<<"\n\n\n";
	for(int i=0;i<SIDE_LEN;i++)
	{
		for(int j=0;j<SIDE_LEN;j++)
		{
			//Do row operations
			//if (i EQUALTO  0)
				row[i] = row[i] + arr[i][j];
			//else if(i EQUALTO  1)
				//row[i] = row[i] + arr[i][j];
			//else if(i EQUALTO  2)
				//row[i] = row[i] + arr[i][j];

			//Do column operations
			//if (j EQUALTO  0)
				col[j] = col[j] + arr[i][j];
			//else if(j EQUALTO  1)
				//col[i] = col[i] + arr[i][j];
			//else if(j EQUALTO  2)
				//col[i] = col[i] + arr[i][j];

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
	// Display the matrix
	for (int i=0; i<SIDE_LEN;i++)
	{
		for (int j=0; j<SIDE_LEN;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n\n\n\n\n";
	
	int r_c_d_tot = 0;
	for (int k=0;k<SIDE_LEN;k++)
	{
		r_c_d_tot = r_c_d_tot+row[k];
		r_c_d_tot = r_c_d_tot+col[k];
	}
	r_c_d_tot = r_c_d_tot+diag_up+diag_down;
	
	if ((r_c_d_tot)%15==0)
		cout<<"This matrix is a magic square.\n\n\n";
	else
		cout<<"This matrix is NOT a magic square.\n\n\n";

	return 0;
}
