/*
Pragram:- Mixed Data Type Arithmetic Operation When the Operands are real
and resultant is Interger.
Author- Mario
Last Modified :- April
*/
#include<stdio.h>
#include<conio.h>
void main(){
  float a ,b;
  int c;
  printf("Enter the two value in real type:- ");
  scanf("%f%f",&a,&b);

  c=a+b;
  printf("a+b=%d\n",c);

  c=a-b;
  printf("a-b=%d\n",c);

  c=a*b;
  printf("a*b=%d\n",c);

  c=a/b;
  printf("a/b=%d\n",c);
  getch();
}
