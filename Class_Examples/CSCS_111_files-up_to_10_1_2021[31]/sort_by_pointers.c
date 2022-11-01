/*
*************************************************
* Program name: sort_by_pointers.c
* Author:	Seif Azghandi
* Date written:	 10/09/2007
* Program description:
*   This program demonstrates how to use
*   2 pointers to sort an array.
*************************************************
*/

int main()
{
   int arr[10] = {6,2,7,3,4,9,1,5,0,8};

   int i,j,temp;
   int* reset_p = arr;
   int* moving_p = reset_p;
   int* arr_p = reset_p;

   printf("Array before sorting:\n\n");
   for(i=0;i<10;i++)
   {
	   printf("%d ",*moving_p);
	   moving_p++;
   }

   //Reset the moving pointer back to beginning of array address.
   moving_p = reset_p;

	//Sort the values.
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
			if(*arr_p > *moving_p)
			{
				temp = *moving_p;
				*moving_p = *arr_p;
				*arr_p = temp;
			}
			moving_p++;
		}
		arr_p++;
		moving_p = arr_p;
	}

	arr_p = reset_p;
	printf("\n\nArray before sorting:\n\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",*arr_p);
		arr_p++;
	}

    return 0;
}
