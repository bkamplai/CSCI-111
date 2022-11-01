#include <time.h>

#define NUM_OF_NAMES 10

void randomize_stu_grades(char students_grades[NUM_OF_NAMES],char grades[6])
{
	srand (time(NULL));

	for(int i=0; i<NUM_OF_NAMES;i++)
		students_grades[i] = grades[rand()%6];
}