/*
Pragram:- Mixed Data Type Arithmetic Operation, When the operands are integer and
resultant is real
Author- Mario
Last Modified :- April
*/
#include<stdio.h>
#include<conio.h>
void main(){
  int a,b;
  float c;
  printf("Enter the Two Values in Integer Type:- ");
  scanf("%d%d,&a,&b");

  c=a+b;
  printf("a+b=%f \n",c);

  c=a-b;
  printf("a-b=%f \n",c);

  c=a*b;
  printf("a*b=%f \n",c);

  c=a/b;
  printf("a%%b=%f \n",c);
  getch();
}
