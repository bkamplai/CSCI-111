#define NUM_OF_NAMES 10

void display_stu_grades(char students_grades[NUM_OF_NAMES])
{
	for(int i=0; i<NUM_OF_NAMES;i++)
	{
		printf("%c  ",students_grades[i]);
	}
	printf("\n");
}