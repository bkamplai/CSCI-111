#include <iostream>

using namespace std;

#define GT >
#define LT <


int main()
{
	int arr[10] = {2,9,-625,67,23,8,45,60,3,42};

	int i,min;
	min=arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]<min)
			min=arr[i];
	}
	cout<<"\n\n\n\n\n";
	cout<<"... And the minimum value of the set {2,9,-625,67,23,8,45,60,3,42} is ... drum roll... "<<min<<"\n\n\n\n\n";

	return 0;
}
