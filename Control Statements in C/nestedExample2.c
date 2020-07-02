/*
Program:- Write a program to find the number nd print the message

Autor:- AmRiyaz

Last Modified:- July 2020
*/

#include<stdio.h>
#include<conio.h>

void main(){
    float t;
    printf("Enter the temperature:- ");
    scanf("%f",&t);
    if (t<=0)
    {
        printf("Its very very cold");
    }
    if (t>0 && t<=10)
    {
        printf("Its cold");
    }
    if (t>10 && t<=20)
    {
        printf("Its Cold Out");
    }
    if (t>20 && t<=30)
    {
        printf("ITS Warm");
    }
    if (t>30)
    {
        printf("Its Hot");
    }    
}
