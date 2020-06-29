/*
Pragram:- Mixed Data Type Arithmetic Operation When the one operands is Integer
and one is real and resultant in Integer.
Author- Mario
Last Modified :- April
*/
#include<stdio.h>
#include<conio.h>
void main(){
  float a;
  int b,c;
  printf("Enter the one value in float type and other integer type:- ");
  scanf("%f%d",&a,&b);

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
