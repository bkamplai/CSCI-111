#include <iostream>
#include <string.h>


using namespace std;

typedef struct
{
   char name[50];
   int age;
   float salary;
} emp_type;

int main()
{
   emp_type anEmployee;
   strcpy(anEmployee.name,"John");
   anEmployee.age = 25;
   anEmployee.salary = 30000;

cout<<anEmployee.name<<" "<<anEmployee.salary<<" "<<anEmployee.age<<"\n\n";

/*
   printf("%s\t",anEmployee.name);
   printf("%d\t",anEmployee.age);
   printf("%5.0f\t",anEmployee.salary);
 */
   return 0;
}
