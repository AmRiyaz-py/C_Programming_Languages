/*
Program:- Find Largest Number using If- Else Statement

Author- AmRiyaz

Last Modified :- June

*/

#include<stdio.h>
#include<conio.h>

void main(){
  int a,b,c,g;
  printf("Enter the value of A,B,C :- ");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
    g=a;
  else
    g=b;
  if(c>g)
    g=c;
  printf("%d is greater",g );
}
