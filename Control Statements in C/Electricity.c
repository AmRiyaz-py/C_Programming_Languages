/*
Program:- Calculate the Total charge of electricity bill
if consumer consume U unit monthly charges according
to first 100 unit- 40 paise per unit, Next 200 Unit 50 Paise 
per unit and beyond 300 unit 60 paise per unit

Autor:- AmRiyaz

Last Modified:- July 2020
*/

#include<stdio.h>
#include<conio.h>

void main(){
    float u,t;
    printf("Enter the unit consume bt consumer:- ");
    scanf("%f",&u);
    if (u<=100)
    {
        t=u*4;}
        else
        {
            if (u<=300)
            {
                t=40+(u-100)*.5;
            }
            else
            {
                t=40+100+(u-300)*.6;
            }
            printf("Total Bill is %f",t);
        }
        
        
    }
