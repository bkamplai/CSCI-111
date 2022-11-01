#include <iostream>
#include <stdlib.h>     /* srand, rand */
using namespace std;

#define LENGTH 9
void init_matrix_blank(char[LENGTH][LENGTH]);
void display_matrix(char[LENGTH][LENGTH]);


int main()
{
	cout<<"This program generates - at each run, a traiangular patterns of stars (asterisks)\n";
	cout<<" in a odd-length of a 2-D matrix.\n\n";
	//
	char matrix[LENGTH][LENGTH] {' '};
	//init_matrix_blank(matrix);
	display_matrix(matrix);
	
	return 0;
}

void fill_in_pattern(char matrix[LENGTH][LENGTH])
{
	srand(time(NULL)); // Seed the random - ONLY ONCE.
	
	int rand_side = rand() % 4;  //rightside = 0, leftside = 1, topside = 2, and bottomside = 3
	
	if(rand_side == 0)
		fill_in_rightside(matrix);
	else if (rand_side == 1)
		fill_in_leftside(matrix);
	else if (rand_side == 2)
		fill_in_topside(matrix);
	else
		fill_in_bottomside(matrix);
}


/*
void init_matrix_blank(char matrix[LENGTH][LENGTH])
{
	for (int i=0; i<LENGTH;i++)
		for (int j=0; j<LENGTH;j++)
			matrix[i][j] = ' ';
	//cout<<" success\n\n";
}
*/




void display_matrix(char matrix[LENGTH][LENGTH])
{
	for (int i=0; i<LENGTH;i++)
		for (int j=0; j<LENGTH;j++)
			cout<<matrix[i][j]<<' ';
		cout<<endl;
}
/**/
