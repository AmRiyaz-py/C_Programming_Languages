/*
Program:- Write a program to find the area and circumference of the circle of the given radius.
Author- AmRiyaz
Last Modified :- April
*/
#include<stdio.h>
#include<conio.h>
void main(){
  float r,a,c;
  printf("Enter the Radius of The Circle:- ");
  scanf("%f",&r);
  a=22*r*r/7.0;
  c=2*22*r/7.0;
  printf("Area=%f\nCircumference = %f",a,c);
  getch();
}
