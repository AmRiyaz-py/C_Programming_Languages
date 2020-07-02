/*
Program:- Write a program to find the given number is odd or even 

Autor:- AmRiyaz

Last Modified:- July 2020
*/

#include<stdio.h>
#include<conio.h>

void main(){
    int x;
    printf("Enter any number to check:- ");
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("%d Number is Even Number",x);
    }
    else
    {
        printf("%d Number is Odd Number",x);
    }
    
    
}