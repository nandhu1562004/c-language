#include<stdio.h>
#include<string.h>

struct student{
   int Rollno;
   char Name[20];
   float Markspercentage;

};
void main(){
  struct student s1;
  s1.Rollno=23;
  s1.Markspercentage=76.5;
  strcpy(s1.Name,"Nandini");
  printf("Rollno : %d\n",s1.Rollno);
  printf("Name : %s\n",s1.Name);
  printf("Markspercentage : %f",s1.Markspercentage);

}
