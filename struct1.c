// To take input from user
struct student
{
   int rollNo;
   char *studentName[50];
   float cgpa;
}s1;

#include<stdio.h>
int main()
{
printf("Enter the rollNo.,studentName,cgpa respectively:\n");
scanf(" %d %s %f",&s1.rollNo,&s1.studentName,&s1.cgpa);
printf("Student rollNo is %d\n",s1.rollNo);
printf("Student name %s\n ",s1.studentName);
printf("Student cgpa %f\n ",s1.cgpa);
return 0;
}