/*
Program:- A company insures its driver in the following cases
    - if the driver is married
    -if the driver is un-married, male and above 30 year of age
    -if the driver is unmarried,female & above 25 year of age
In all other cases the driver is insured. Write a program to determine whether
the driver be insured or not, if maritual status, sex and age are input.

Autor:- AmRiyaz

Last Modified:- July 2020
*/

#include<stdio.h>
#include<conio.h>

void main(){
    char sex,ms;
    int age;
    printf("Enter the age sex & maritual status of the driver:- ");
    scanf("%d,%c,%c",&age,&sex,&ms);
    if (ms=="M" || ms=="m"){
        printf("Driver is insured");
        else
        {
            if (age>30)
        {
            printf("Driver is insured");
        }
            else
            {
                printf("Driver is uninsured");
            }
        else
        {
            if (age>25)
            {
                printf("Driver is insured");
            }
            else
            {
                printf("Driver is not insured");
            }
            
            
        }
        }
  
    }

}

