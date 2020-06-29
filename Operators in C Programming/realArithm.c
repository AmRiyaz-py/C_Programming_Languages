/*
Pragram:- Real type of Arithmentic Operation.
Author- Mario
Last Modified :- April
*/
#include<stdio.h>
#include<conio.h>
void main(){
  float a,b,c;
  printf("Enter The Two Value in Real Type:- ");
  scanf("%f%f",&a,&b);

  c=a + b;
  printf("a+b=%f\n",c);

  c=a - b;
  printf("a-b=%f\n",c);

  c=a * b;
  printf("a*b=%f\n",c);

  c=a / b;
  printf("a/b=%f\n",c);
  getch();
}
