/*
Pragram:- Increment and Decrement Operation.
Author- Mario
Last Modified :- April
*/
#include<stdio.h>
#include<conio.h>
void main(){
  int i=1,j;
  i++; //post Increment
  printf("After Increment %d\n",i);
  i=1;
  i--; //post Decrement
  printf("After Decrement %d\n",i);
  i=1;
  j=i++; //post Increment
  printf("After Increment i=%d j=%d\n",i,j);
  i=1;
  j=++i; //pre Increment
  printf("After Increment i=%d j=%d\n",i,j);
  i=1;
  j=i++ + i++;
  printf("After Processing i=%d j=%d",i,j);
  i=1;
  j=++i + ++i;
  printf("After Processing i=%d j=%d\n",i,j);
  getch();
}
