#define NAME_LEN 4
#define NUM_OF_NAMES 10

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