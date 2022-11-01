#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

typedef struct
{
   struct
   {
	   char name[50];
	   int age;
   } demog;

   struct
   {
	   char illness[50];
	   char allergies[100];
	   int health_status;	//0 is healthy; 1 average; 2 poor.
   } rx;

   struct
   {
	   char ins[50];
	   int cash[100];
   } pmt;

} patient_type;


int main()
{
   patient_type p1;

   strcpy(p1.demog.name,"Travis");
   p1.demog.age = 25;

   strcpy(p1.rx.illness,"chronic fatigue");
   strcpy(p1.rx.allergies,"pepper");

   strcpy(p1.pmt.ins,"aethna");


cout<<"\n\n\nName	 Age    Illness         Allergies   Insurance info.\n";
cout<<"--------------------------------------------------------\n\n";

cout<<p1.demog.name<<"\t  ";
cout<<p1.demog.age<<"\t";

cout<<p1.rx.illness<<"\t   ";
cout<<p1.rx.allergies<<"\t";
cout<<p1.pmt.ins<<"\t\n\n";

/*    printf("Name	 Age    Illness         Allergies   Insurance info.\n");
   printf("--------------------------------------------------------\n\n");

   printf("%s\t",p1.demog.name);
   printf("%d\t",p1.demog.age);

   printf("%s\t",p1.rx.illness);
   printf("%s\t",p1.rx.allergies);

   printf("%s\t",p1.pmt.ins);
   
   printf("\n\n"); */

   return 0;
}
