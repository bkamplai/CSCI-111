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
#define DIAG 2


int main()
{
    	int arr[SIDE_LEN][SIDE_LEN] = {{8,1,6},{3,5,7},{4,9,2}};

	// 
	int r_c_d[SIDE_LEN*2+DIAG];

	cout<<"\n\n\n";
	for(int i=0;i<SIDE_LEN;i++)
	{
		for(int j=0;j<SIDE_LEN;j++)
		{
			//Do row operations
			if (i EQUALTO  0)
				r_c_d[i] = r_c_d[i] + arr[i][j];
			else if(i EQUALTO  1)
				r_c_d[i+1] = r_c_d[i+1] + arr[i][j];
			else if(i EQUALTO  2)
				r_c_d[i+2] = r_c_d[i+2] + arr[i][j];

			//Do column operations
			if (j EQUALTO  0)
				r_c_d[SIDE_LEN+j+0] = r_c_d[SIDE_LEN+j+0] + arr[i][j];
			else if(j EQUALTO  1)
				r_c_d[SIDE_LEN+j+1] = r_c_d[SIDE_LEN+j+1] + arr[i][j];
			else if(j EQUALTO  2)
				r_c_d[SIDE_LEN+j+2] = r_c_d[SIDE_LEN+j+2] + arr[i][j];

			//Do diagonal operations
			if(i EQUALTO j)
				r_c_d[SIDE_LEN*2] = r_c_d[SIDE_LEN*2] + arr[i][j];
			else if(i EQUALTO  j+2 || j EQUALTO  i+2)
			{
				r_c_d[SIDE_LEN*2+1] = r_c_d[SIDE_LEN*2+1] + arr[i][j];
				if(i EQUALTO j+2)
					r_c_d[SIDE_LEN*2+1] = r_c_d[SIDE_LEN*2+1] +arr[1][1];
			}
		}
	}
	int tot=0;
	for (int k=0;k<= SIDE_LEN*2+DIAG-1;k++)
		tot = tot+ r_c_d[k];

	if (tot%15==0)
		cout<<"This matrix is a magic square.\n\n\n";
	else
		cout<<"This matrix is NOT a magic square.\n\n\n";

	return 0;
}
