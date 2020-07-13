/*
Program:- Find the sum of the series 1 + 1/1! +1/2! + 1/3! + 1/4!....

Author:- Amriyaz

Last modified:- 2020 July
*/

#include<stdio.h>
#include<conio.h>

int main(){
    float i,n,s,a=1;
    printf("Enter the term of series:- ");
    scanf("%f",&n);
    for (i = 1; i <=n; i++)
    {
        a=a*i;
        s=s+1/a;
    }
    printf("Sum is=%f",s);
}