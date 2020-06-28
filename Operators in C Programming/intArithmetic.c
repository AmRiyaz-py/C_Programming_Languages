/*
Pragram:- Integer Type of Arithmetic Operation.
Author- Mario
Last Modified :- April
*/
#include<stdio.h>
#include<conio.h>
void main(){
  int a,b,c;
  printf("Enter the Two Values of integer type:- ");
  scanf("%d%d",&a,&b);

  c = a + b;
  printf("a + b = %d\n",c);

  c = a - b;
  printf("a - b = %d\n",c);

  c = a * b;
  printf("a * b = %d\n",c);

  c = a / b;
  printf("a / b = %d\n",c);

  c = a % b;
  printf("a % % b = %d\n",c);
  getch();
}
