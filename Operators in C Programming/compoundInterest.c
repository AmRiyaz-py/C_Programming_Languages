/*
Pragram:- Calculate the final amount of money invested in a bank at compound
interest is -V=P(1+r)^n, where p is principal amount r is interest rate in
decimal per year and n is time period in year.

Author- Mario

Last Modified :- April
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
  float p,r,n,v;

  printf("Enter the principal Amount:- ");
  scanf("%f",&p);

  printf("Enter the Interest Rate:- ");
  scanf("%f",&r);

  printf("Enter the Time Period in a Year:- ");
  scanf("%f",&n);

  v=p*pow((1+r/100),n);
  printf("Final Amount-%f",v);
  getch();
}
