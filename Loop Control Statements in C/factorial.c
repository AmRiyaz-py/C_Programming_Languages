/*
Program:- Find the factorial of given Number 
(ex - Factorial of 5 id 5*4*3*2*1 = 120)

Author:-  AmRiyaz

Last Modified:-  2020 July
*/

#include<stdio.h>
#include<conio.h>
int main(){
    int i,n,s=1;
    printf("Enter the no to calculate factorial:- ");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        s=s*i;
        printf("Factorial %d no=%d",n,s);
    }
}