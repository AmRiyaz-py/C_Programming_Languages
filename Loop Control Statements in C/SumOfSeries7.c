/*
Program:- Find the sum of series (a+b)/1! + (a+b)^2/2!+(a+b)^3/3!+.....

Author:- AmRiyaz

Last Modifies:- 2020 July
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float s = 0;
    int i,a,b,n,f = 1;
    printf("Enter the value of a and b:- ");
    scanf("%d%d",&a,&b);
    printf("Enter the number of terms:- ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        f = f*1;
        s = s+pow((a+b),i)/f;
    }
    printf("Sum = %f",s);
}