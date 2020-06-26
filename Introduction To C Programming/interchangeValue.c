/*
Program:- Write a program to interchange the values of the variable.
            1. Without using third variable.
Author- AmRiyaz

Last Modified :- April
*/
#include<stdio.h>
#include<conio.h>

void main(){
  int a,b;
  printf("Enter Value of a and b:- ");
  scanf("%d%d",&a,&b);
  printf("Value before Interchange is a = %d b = %d \n",a,b);
  a=a-b;
  b-a+b;
  a=b-a;
  printf("Valus After interchange is a=%d b=%d\n",a,b);
  getch();
}
