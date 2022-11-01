#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct
{
	int a;
	int b;
	int c;
	int d;
} TypeX;

TypeX doubleUp(int,int,int,int);

int main()
{
	//int a=2,b=3,c=4,d=5;
	TypeX var;
	var.a = 2;
	var.b = 3;
	var.c = 4;
	var.d = 5;
	
	cout<<"\n\n\member values BEFORE calling the function\t"<<var.a<<" "<<var.b<<" "<<var.c<<" "<<var.d<<"\n";
	var = doubleUp(var.a,var.b,var.c,var.d);

	cout<<"\n\nmember values AFTER calling the function\t"<<var.a<<" "<<var.b<<" "<<var.c<<" "<<var.d<<"\n";
	//printf("%i %i %i %i\n",var.a,var.b,var.c,var.d);

	return 0;
}

TypeX doubleUp(int k,int m,int n,int p)
{
	TypeX temp;

	temp.a = k*2;
	temp.b = m*2;
	temp.c = n*2;
	temp.d = p*2;

	return temp;
}
