#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char word[256] = "";
	int res = 1; // Assume the word is palindrome, INITIALLY!
	
	cout<<"Please enter a palindrome-candidate word: "<<endl;
	cin>>word;
	
	cout<<"\n\n\n\n\n";	

	int string_length_minus_one = strlen(word)-1;
	int integer_div = strlen(word)/2;
	int integer_div_minus_one = integer_div-1;


	
	for (int i=0; i<= integer_div_minus_one; i++)
	{
		if(word[i] != word[string_length_minus_one - i])
		{
			res = 0;
			break;
		}
	}
	
	if(res == 0)
		cout<<"the entered word, "<<word<<", is NOT a palindrome."<<endl;
	else
		cout<<"the entered word, "<<word<<", IS a palindrome."<<endl;
	
	
	cout<<"\n\n\n\n\n";
	
	return 0;
}
