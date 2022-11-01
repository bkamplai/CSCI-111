#include <iostream>

using namespace std;

int main() {

	int arr[10];
	int i;
	
	for (i=0; i<10; i++) {
		
		arr[i] = i+1;
		cout << arr[i] << " ";
		
	}

	cout << endl;
	cout << " display index that belongs to value 7: " << arr[6] << endl;
	cout << "length of arra is " << sizeof(arr) << endl;

	return 0;

}