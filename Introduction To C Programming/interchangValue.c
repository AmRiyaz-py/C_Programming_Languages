/*
Pragram:- Write a program to interchange the values of the variable.
            2. With using third variable.
Author- Mario
Last Modified :- April
*/
#include<stdio.h>
#include<conio.h>
void main(){
  int a,b,t;
  printf("Enter The Value of a and b:- ");
  scanf("%d%d,&a,&b");
  printf("Value before interchange is a=%d b=%d\n",a,b);
  t=a;
  a=b;
  b=t;
  printf("Value After Interchange is a=%d b=%d\n",a,b);
  getch();
}
