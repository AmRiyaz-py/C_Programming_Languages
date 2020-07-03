/*
Program:- Find the total marks , percentage and grade of the 
students that is appear in five different subjects.
Grade according ro percentage.

Autor:- AmRiyaz

Last Modified:- July 2020
*/

#include<stdio.h>
#include<conio.h>
void main(){
    int m1,m2,m3,m4,m5;
    float t,p;
    printf("Enter the marks of five different subjects:-");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    t = m1+m2+m3+m4+m5;
    p=t/5;
    printf("Total Marks=%f Percentageis = %f",t,p);
    if (p>=80)
    {
        printf("Grade is E+");
    }
    if (p>=70 && p<80)
    {
        printf("Grade is E");
    }
    if (p>=60 && p<70)
    {
        printf("Grade is A+");
    }
    if (p>=50 && p<60)
    {
        Printf("Grade is A");
    }
    if (p>=40 && p<50)
    {
        printf("Grade is B");
    }
    if (p<40)
    {
        printf("Grade is not good");
    }
    
}

