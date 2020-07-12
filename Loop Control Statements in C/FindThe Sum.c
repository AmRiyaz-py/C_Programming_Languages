/*
Program:- Find the sum 1+x+x2+x3+x4+......x10

Author:-  AmRiyaz

Last Modified:- 2020 July 
*/

#include<stdio.h>
#include<conio.h>

int main(){
    long int s=1, a=1;
    int i,x;
    printf("Enter the vlaue of x- ");
    scanf("%d",&x);
    for (i = 1; i <= 10; i++)
    {
        a=a*x;
        s=s+a;
        printf("Sum=%ld",s);
    }
}