/*
Program:- Find the sum of series- 1+(1/2)2+(1/3)2+(1/4)2+.....

Author:- AmRiyaz

Last Modified:- 2020 July
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float s=1;
    int i,x;
    for (i = 2; i <=10; i++)
    {
        s= s+pow((1.0/i),2);
    }
    printf("Sum =%f",s);
    
}