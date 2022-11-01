#define NUM_OF_NAMES 10

int det_num_of_stars(char students_grades[NUM_OF_NAMES], int col)
{
	if (students_grades[col] == 'A')
		return 10;
	else if (students_grades[col] == 'B')
		return 8;
	else if (students_grades[col] == 'C')
		return 6;
	else if (students_grades[col] == 'D')
		return 4;
	else if (students_grades[col] == 'E')
		return 2;
	else if (students_grades[col] == 'F')
		return 0;	
}