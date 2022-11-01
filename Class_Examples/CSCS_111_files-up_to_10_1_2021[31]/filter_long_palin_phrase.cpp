/*
**********************************
* Long palindrome phrases amples
* ------------------------------
*
* "Do geese see God"
* "Mr. Owl ate my metal worm"                  ALL characters EXCEPT alpha are igonred.
* "Was it a car or a cat I saw?"               ALL characters EXCEPT alpha are igonred.
* "Murder for a jar of red rum"
* "Go hang a salami, I'm a lasagna hog"        ALL characters EXCEPT alpha are igonred.
* "A nut for a jar of tuna."                   ALL characters EXCEPT alpha are igonred.
*
"Dennis, Nell, Edna, Leon, Nedra, Anita, Rolf,Nora, Alice, Carol, Leo, Jane, Reed, Dena,Dale,
 Basil, Rae, Penny, Lana, Dave, Denny,Lena, Ida, Bernadette, Ben, Ray, Lila, Nina, Jo, Ira,
 Mara, Sara, Mario, Jan, Ina, Lily, Arne, Bette, Dan, Reba, Diane, Lynn, Ed, Eva, Dana, Lynne,
 Pearl, Isabel, Ada, Ned, Dee, Rena, Joel, Lora, Cecil, Aaron, Flora, Tina, Arden, Noel, and Ellen sinned."
* 
*
*
*/

#include <iostream>
#include <cstring>

using namespace std;

#define AND &&
#define OR ||

int main()
{
	char orig_phrase[1024]="";
	char filtered_phrase[1024] ="";
	int res = 1; // Asuume result is palindrome; INITIALLY.
	
	//The un-commenting of the following line tests whether the filtering was effective.
	//cout<<"Please enter a palindrome-candidate phrase: "<<endl;
	
	
	
/* START from HERE ...............................  */	
	
	cin.getline(orig_phrase, 1024, '.' );

	cout<<"\n\n\n\n\n";



	int j=0;
	for (int i=0;i<= strlen(orig_phrase)-1;i++)
	{
		if((orig_phrase[i]>='A' AND orig_phrase[i]<='Z') OR (orig_phrase[i]>='a' AND orig_phrase[i]<='z'))
		{
			filtered_phrase[j] = tolower(orig_phrase[i]);		
			j++;
		}
	}
	
	cout<<"The filtered phrase is:\n\n\n\n"<<filtered_phrase<<"\n\n\n\n";
	
/* ... TO  HERE ...................IS ALL ABOUT FILTERING ANYTHING EXCEPT THE ALPHABET LETTRS *********************/	
	
	
	
/* FROM HERE TO ............................................. */	
	
	
	for (int i=0; i<= strlen(filtered_phrase)/2 - 1; i++)
	{
		if(filtered_phrase[i] != filtered_phrase[strlen(filtered_phrase)-1-i])
		{
			res = 0;
			break;
		}
	}
	
	if(res == 0)
		cout<<"the entered word is NOT a palindrome."<<endl;
	else
		cout<<"the entered word IS a palindrome."<<endl;


/* ... TO HERE ............ IS ABOUT DETERMINING WHETHER OUR PHRASE IS PALINDROME ******************/	
	
	cout<<"\n\n\n\n\n";
	
	
	return 0;

}



