/*
Program:- print the fibonacci series 0,1,1,2,3,5,8,13,21,34,....

Author:-  AmRiyaz

Last Modified:- 2020 July
*/

#include<stdio.h>
#include<conio.h>

int main(){
    int a=0;
    int b=1;
    int c,i,n;
    printf("Enter the number of terms to print the series:- ");
    scanf("%d",&n);
    printf("%d%d",a,b);
    for ( i = 1; i <=n; i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
    
}