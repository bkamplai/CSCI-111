#define NUM_OF_NAMES 10

void display_hist(char hist[NUM_OF_NAMES][NUM_OF_NAMES])
{
	for(int i=0;i<NUM_OF_NAMES; i++)
	{
		for(int j=0;j<NUM_OF_NAMES; j++)
		{
			printf("%c ",hist[i][j]);
		}
		printf("\n");
	}
}