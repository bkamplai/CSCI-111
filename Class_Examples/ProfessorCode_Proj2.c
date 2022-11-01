#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NAME_LEN 4
#define NUM_OF_NAMES 10

void blank_out_histogram(char [][NUM_OF_NAMES]);
void randomize_stu_grades(char[],char[]);
void populate_stu_names(char[][NAME_LEN]);
void fill_out_histogram(char [][NUM_OF_NAMES],char[]);
int det_num_of_stars(char[], int);
void display_stu_names(char[][NAME_LEN]);
void display_stu_grades(char[]);
void display_hist(char[][NUM_OF_NAMES]);

int main()
{
	char grades[6] = {'A','B','C','D','E','F'};
	char students_grades[NUM_OF_NAMES] = {' '};	
	char names[NUM_OF_NAMES][NAME_LEN];
	char hist[NUM_OF_NAMES][NUM_OF_NAMES];
		
	printf("\n\n");

	// Populate students' names.
	populate_stu_names(names);
	
	// blank out (initialize) the histogram array.
	blank_out_histogram(hist);	

	// Enter students' grades randomly
	randomize_stu_grades(students_grades,grades);

	// Fill out histogram array
	fill_out_histogram(hist,students_grades);
		
	// Display filled-out histogram	
	display_hist(hist);
	
	// Display students' names
	display_stu_names(names);
	
	// Display students' grades
	display_stu_grades(students_grades); 
	
	return 0;
}

/*
***************************************
* Function definitions starts from here
***************************************
*/

// Randomly populate the students' grades with values of 'A' through 'F'
void randomize_stu_grades(char students_grades[NUM_OF_NAMES],char grades[6])
{
	srand (time(NULL));

	for(int i=0; i<NUM_OF_NAMES;i++)
		students_grades[i] = grades[rand()%6];
}

//Populate the stduents' names with "S1" through "S10"
void populate_stu_names(char names[NUM_OF_NAMES][NAME_LEN])
{
	char str[3];
	char S_lit[3];
	strncpy(S_lit, "", sizeof(S_lit));
	
	for (int i=1; i<=NUM_OF_NAMES; i++)
	{
		sprintf(str, "%d", i);
		strcat(S_lit,"S");
		strcat(S_lit,str);
		strcpy(names[i],S_lit);
		strncpy(S_lit, "", sizeof(S_lit)); // Empty out (reset) the S_literal
	}
}

// Initialize the histograms with blank spaces.
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

//Fill out the histogram with appropriate number of stars
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

// Determine number of stars for each bar in the histogram
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

void display_stu_names(char names[NUM_OF_NAMES][NAME_LEN])
{
	for (int i=1; i<=NUM_OF_NAMES; i++)
	{
		printf("%s ",(names[i]));
	}
	printf("\n");
}

void display_stu_grades(char students_grades[NUM_OF_NAMES])
{
	for(int i=0; i<NUM_OF_NAMES;i++)
	{
		printf("%c  ",students_grades[i]);
	}
	printf("\n");
}

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
