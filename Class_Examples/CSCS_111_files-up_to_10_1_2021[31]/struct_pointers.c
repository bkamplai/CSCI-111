#include <stdio.h>

typedef struct
{
   char name[50];
   int age;
   float salary;
} emp_type;

int main()
{
   emp_type anEmployee;
   emp_type* p;

   p = &anEmployee;

   strcpy(p->name,"John");
   p->age = 25;
   p->salary = 30000;

   printf("%s\t",p->name);
   printf("%d\t",p->age);
   printf("%f\t",p->salary);

   return 0;
}
