/*
Program:- Find the first n numbers

Author:- AmRiyaz

Last Modified:- 2020 July
*/

#include<stdio.h>
#include<conio.h>
int main(){
int i,n,s=0;
printf("Enter the number you want to sum:- ");
scanf("%d",&n);
for( i = 1; i <=n; i++)
{
    s=s+1;
    printf("Addition of first %d No =%d",n,s);
}
}