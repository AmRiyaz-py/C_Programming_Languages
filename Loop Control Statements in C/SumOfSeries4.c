/*
Program:- Find the sum of series (sin X Series) x-x^3/3! + x^5/5! - x^7/7! + x^9/9!

Author:- AmRiyaz

Last Modifies:- 2020 July
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float n,s = 0,a=1,x,y,i=1,j;
    printf("Enter the term of series:- ");
    scanf("%f",&n);
    printf("Enter the value in degree:- ");
    scanf("%f",&y);
    x = 22*y/(180.0*7);
    a=x;
    for (j = 1; j <= n; j=j++, i=i+2)
    {
        s=s+a;
        a=x*x*a*(-1)/((i+1)*(i+2));
    }
    printf("sin(%f)=%f",n,s);
}