#define NUM_OF_NAMES 10

void fill_out_histogram(char hist[NUM_OF_NAMES][NUM_OF_NAMES], char students_grades[NUM_OF_NAMES])
{
	for(int j=0;j<NUM_OF_NAMES; j++)
	{
		int num_of_stars= det_num_of_stars(students_grades,j);
		for(int i=NUM_OF_NAMES-1;i>=NUM_OF_NAMES-num_of_stars; i--)
		{
			if (num_of_stars == 0)
				break;
			else
				hist[i][j] = '*';
		}
	}
}	