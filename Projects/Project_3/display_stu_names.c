#define NAME_LEN 4
#define NUM_OF_NAMES 10

void display_stu_names(char names[NUM_OF_NAMES][NAME_LEN])
{
	for (int i=1; i<=NUM_OF_NAMES; i++)
	{
		printf("%s ",(names[i]));
	}
	printf("\n");
}