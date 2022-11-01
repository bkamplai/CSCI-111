#include <stdio.h>

/*
******************************
* Memory addresses & pointers
******************************
*/

int main()
{

	// Declare and initialize variables.
    int a = 5;
    float b = 2.718;
    char p = 'A';


	// Display the values stored in the variables.
    printf("\n\nDisplaying the values stored in declared variables::\n\n");
    printf("%i\n",a);
    printf("%f\n",b);
    printf("%c\n",p);


	// Display the address of the variables directly.
    printf("The address of integer a in hexa-decimal is = %x\n",&a);
    printf("The address of float b in hexa-decimal is = %x\n",&b);
    printf("The address of character p in hexa-decimal is = %x\n",&p);


	// Declare pointer variables.
	int* int_ptr;
	float* flt_ptr;
	char* char_ptr;

	//Initialize the pointers with the address of the variables.
    int_ptr = &a;
    flt_ptr = &b;
    char_ptr = &p;

	// Display the values stored in the pointers.
    printf("\n\nDisplaying the addresses of the variables stored in the pointers:\n\n");
    printf("The address of integer a stored in int_ptr is = %x\n",int_ptr);
    printf("The address of float b stored in flt_ptr is = %x\n",flt_ptr);
    printf("The address of character p stored in char_ptr is = %x\n",char_ptr);


	// Display the values stored in the variables VIA pointers (dereferencing).
    printf("\n\nDisplaying the addresses of the variables stored in the pointers:\n\n");
    printf("The address of integer a stored in int_ptr is = %i\n",*int_ptr);
    printf("The address of float b stored in flt_ptr is = %f\n",*flt_ptr);
    printf("The address of character p stored in char_ptr is = %c\n",*char_ptr);


	return 0;
}
