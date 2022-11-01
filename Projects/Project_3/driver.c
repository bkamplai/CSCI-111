#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "funct_proto.h"

#define NAME_LEN 4
#define NUM_OF_NAMES 10

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