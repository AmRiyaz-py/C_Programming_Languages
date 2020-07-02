/*
Program:- Temperature output but with nested if

Autor:- AmRiyaz

Last Modified:- July 2020
*/

#include<stdio.h>
#include<conio.h>

void main(){
    float t;
    printf("Enter the temperature:- ");
    scnaf("%f",&t);
    if (t<=0)
    {
        printf("Its very very cold");
    }
    else
    {
        if (t<=10)
        {
            printf("Its cold");
        }
        else
        {
            if (t<=20)
            {
                printf("its cold");
            }
            else
            {
                if (t<=30)
                {
                    printf("Its warm");
                }
                else
                {
                    printf("its hot");
                }
                
                
            }
            
            
        }
        
        
    }
    
}