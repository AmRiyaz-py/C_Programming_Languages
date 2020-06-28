/*
Pragram:- Relational,Logical Operator and Conditional Operator.
Author- Mario
Last Modified :- April
*/
#include<stdio.h>
#include<conio.h>
void main(){
  int a=10,b=20,c=30,d,e,f;
  d=a>b;
  e=b<=c;
  f=(a==b);
  printf("Relational Operator d=%d e=%d f=%d\n",d,e,f);
  d=(a>b)&&(b>c);
  e=(a<b)||(b<=c);
  f=30&&20;
  printf("logical Operators d=%d e=%d f=%d\n",d,e,f);
  int r;
  r=a>c?a+c:a-c;
  printf("Conditional Operator %d",r);
  getch();
}
