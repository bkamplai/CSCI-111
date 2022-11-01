#include <stdio.h>

typedef struct
{
   char name[50];
   int age;
   float salary;
} emp_type;

int main()
{
   int i;
   emp_type employees[3];

   for(i=0;i<3;i++)
   {
	   printf("Please enter employee's name:\n");
   	   scanf("%s",employees[i].name);
	   printf("Please enter employee's age:\n");
   	   scanf("%d",&employees[i].age);
	   printf("Please enter employee's salary:\n");
   	   scanf("%f",&employees[i].salary);
   	   printf("\n\n");
   }

   printf("\n\nE m p l o y e e   l i s t\n");
   printf("-------------------------------\n");
   for(i=0;i<3;i++)
   {
	   printf("%s\t%d\t%5.0f\n",employees[i].name,employees[i].age,employees[i].salary);
   }

   return 0;
}
