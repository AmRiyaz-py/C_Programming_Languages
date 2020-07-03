/*
Program:- Find the total marks , percentage and grade of the 
students that is appear in five different subjects.
Grade according ro percentage. Using nested If Statement

Autor:- AmRiyaz

Last Modified:- July 2020
*/

#include<stdio.h>
#include<conio.h>

void main(){
    int m1,m2,m3,m4,m5;
    float t,p;
    printf("Enter the marks of 5 subjects:- ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    t=m1+m2+m3+m4+m5;
    p=t/5;
    printf("Total marks=%f percentage is = %f",t,p);
    if (p>=80)
    {
        printf("Grade is E+");
    }
    else
    {
        if (p>=70)
        {
            printf("Grade is E");
        }
        else
        {
            if (p>=60)
            {
                printf("Grade is A+");
            }
            else
            {
                if (p>=50)
                {
                    printf("Grade is A");
                }
                else
                {
                    if (p>=40)
                    {
                        printf("Grade is B");
                    }
                    else
                    {
                        printf("Grade is not good");
                    }
                    
                }
                
            }
            
            
        }
        
        
    }
    
    
}