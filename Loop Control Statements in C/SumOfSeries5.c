/*
Program:- Find the sum of series 1 + x^1/1! + x^2/2! + x^3/3! + x^4/4! ....

Author:- AmRiyaz

Last Modifies:- 2020 July
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float i,n,s,a=1,x;
    printf("Enter the term of series:- ");
    scanf("%f",&n);
    printf("Enter the value of x:- ");
    scnaf("%f",&x);
    for (i = 1; i <= n; i++)
    {
        a = a*i;
        s = s+pow(x,i)/a;
    }
    printf("sum=%f",s);
}