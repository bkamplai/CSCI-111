#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char word[256] = "";
	int res = 1; // Assume the word is palindrome, INITIALLY!
	
	cout<<" Please enter a palindrome-candidate word: "<<endl;
	cin>>word;
	
	cout<<"\n\n\n\n\n";	



	
	for (int i=0; i<= strlen(word)/2 - 1; i++)
	{
		if(word[i] != word[strlen(word)-1-i])
		{
			res = 0;
			break;
		}
	}
	
	if(res == 0)
		cout<<"the entered word is NOT a palindrome."<<endl;
	else
		cout<<"the entered word IS a palindrome."<<endl;
	
	
	cout<<"\n\n\n\n\n";
	
	return 0;
}
