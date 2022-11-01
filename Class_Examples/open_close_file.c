#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Create 2 file pointers for reading from a file and witing to a file.

  FILE *fp_read,*fp_write;

  // It would create the file, if it does not exist
  fp_write = fopen("C:/Corp/cygwin/home/Seif Azghandi/c_progs/week9/output.txt","w");

  printf("If you see this message, it means a file for \"writing\" is successfully created.\n\n");
  // The file MUST exist before it could be opened.
  if((fp_read = fopen("C:/cygwin/home/Seif Azghandi/week8/junk.c","r"))==NULL)
  {
     printf("Could not open the file. Exiting...");
     exit(1);
  }

  printf("If you see this message, it means a file for \"reading\" is successfully created.\n\n");


  fclose(fp_read);
  fclose(fp_write);

  printf("If you see this message, it means both the \"read\" and \"write\" files successfully closed.\n\n");

  return 0;
}