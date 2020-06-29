/*
Pragram:- Mixed Data Type Arithmetic Operation When the one operands is integer
and one is real and resultant is real.
Author- Mario
Last Modified :- April
*/
#include<stdio.h>
#include<conio.h>
void main(){
  float a,c;
  int b;
  printf("Enter the one value is real type and other is integer type:- ");
  scanf("%f%d,&a,&b");

  c=a+b;
  printf("a+b=%f\n",c);

  c=a-b;
  printf("a-b=%f\n",c);

  c=a*b;
  printf("a*b=%f\n",c);

  c=a/b;
  printf("a/b=%f\n",c);
  getch();
}
