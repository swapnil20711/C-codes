//Program to print student data using structure
struct student
{
    int rollno;
    float cgpa;

};

#include<stdio.h>
int main()
{
 struct student shubham,swapnil,sakeena;
 shubham.rollno=380;
 swapnil.rollno=381;
 sakeena.rollno=379;
 shubham.cgpa=7.89;
 swapnil.cgpa=8.80;
 sakeena.cgpa=9.00;
 printf("Student details are:\n");
 printf("Shubham : %d is rollno. %f is cgpa\n",shubham.rollno,shubham.cgpa);
 printf("Swapnil : %d is rollno. %f is cgpa\n",swapnil.rollno,swapnil.cgpa);
 printf("Sakeena: %d is rollno. %f is cgpa\n",sakeena.rollno,sakeena.cgpa);
 return 0;
}