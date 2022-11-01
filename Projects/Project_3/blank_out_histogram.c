#define NUM_OF_NAMES 10

void blank_out_histogram(char histogram[NUM_OF_NAMES][NUM_OF_NAMES])
{
	for(int i=0;i<NUM_OF_NAMES; i++)
	{
		for(int j=0;j<NUM_OF_NAMES; j++)
		{
			histogram[i][j] = ' ';
		}
	}
}