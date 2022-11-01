#include <iostream>
#include <string.h>

using namespace std;

//Abstract Data Type (ADT)
typedef struct
{
   char name[50];
   int age;
   float salary;
} emp_type;

//prototypes
void input_emps(emp_type[]);
void display_emps(emp_type[]);

//Driver routine
int main()
{
    emp_type employees[3];

	input_emps(employees);
	display_emps(employees);

    return 0;
}


// Function definitions
void input_emps(emp_type a[])
{
    int i;
   for(i=0;i<3;i++)
   {
	   printf("Please enter employee's name:\n");
	   scanf("%s",a[i].name);
	   printf("Please enter employee's age:\n");
	   scanf("%d",&a[i].age);
	   printf("Please enter employee's salary:\n");
	   scanf("%f",&a[i].salary);
	   printf("\n\n");
   }
}

void display_emps(emp_type b[])
{
	int i;
   printf("\n\nE m p l o y e e   l i s t\n");
   printf("-------------------------------\n");
   for(i=0;i<3;i++)
   {
	   printf("%s\t%d\t%5.0f\n",b[i].name,b[i].age,b[i].salary);
   }
}

