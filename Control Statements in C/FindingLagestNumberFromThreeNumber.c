/*
Program:- Find Largest Number from Three Different Number Using Simple If statement

Author- AmRiyaz

Last Modified :- June

*/

#include<stdio.h>
#include<conio.h>

void main(){
  int a , b , c;
    printf("Enter the value of a,b,c:- ");
    scanf("%d%d%d",&a,&b,&c);
  if(a>b&&a>c){
    printf("a is greater");}
  if (b>c&&b>a){
    printf("b is greater");}
  if(c>a&&c>b ){
    printf("C is greater");}
}
