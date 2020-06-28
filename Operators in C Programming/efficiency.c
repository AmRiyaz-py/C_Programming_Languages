/*
Pragram:- The efficiency of an electric power egenrator is given by
    E=output/Input>V*I/(V*I+W) where V - is output voltage, I - Input Voltage,
    W - Power Loss in generator, write a program to calculate the efficiency.

Author- Mario

Last Modified :- April
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
  float V,I,W,E;

  printf("Enter the Output Voltage:- ");
  scanf("%f",&V);

  printf("Enter the Output Current:- ");
  scanf("%f",&I);

  printf("Enter the Power Loss in Generator:- ");
  scanf("%f",&W);

  E=V*I/(V*I+W);
  printf("Efficiency-%f",E);
  getch();
}
