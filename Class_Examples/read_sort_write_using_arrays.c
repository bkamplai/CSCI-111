#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp_read,*fp_write;

  int junk;
  int ctr=0;

  fp_write = fopen("/Users/brandonkamplain/Desktop/2021-22/Fall_2021/CSCI_111/Assignments/Assignment_3/encryptedfile.txt","w");
  if((fp_read = fopen("/Users/brandonkamplain/Desktop/2021-22/Fall_2021/CSCI_111/Assignments/Assignment_3/inputfile.txt","r"))==NULL)
  {
     printf("Could not open the file. Exiting...\n");
     exit(1);
  }

  // This loop only counts number of data points.
  while(feof(fp_read) == 0)
  {
	  fscanf(fp_read,"%d ",&junk);
	  ctr++;
  }


  // Since we know number of data points, go ahead and create an array
  // with exact number of elements.

  int arr[ctr];

  // Now, rewind the pointer and this time populate the array with the values.
  rewind(fp_read);
  int i,j;

  // Populate the array.
  for(i=0;i<ctr;i++)
  {
	  fscanf(fp_read,"%d",&arr[i]);
  }

  // display the populated array.
  printf("\n\nUn-sorted...\n\n");
  for(i=0;i<ctr;i++)
  {
	  printf("%d ",arr[i]);
  }

  int temp;
  for(i=0;i<ctr;i++)
  {
	   for(j=i;j<ctr;j++)
	   {
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	   }
  }

  // display the populated array.
  printf("\n\nSorted...\n\n");
  for(i=0;i<ctr;i++)
  {
	  printf("%d ",arr[i]);
  }

  // Close both file pointers.
  fclose(fp_read);
  fclose(fp_write);

  return 0;
}