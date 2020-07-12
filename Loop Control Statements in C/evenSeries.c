/*
Program:- Print the even series 2,4,6,8,10,12....n

Author:- AmRiyaz

Last Modified:- 2020 July

*/

#include<stdio.h>
#include<conio.h>

int main(){
    int i,n;
    printf("Enter the number you want to print the series:- ");
    scanf("%d",&n);
    printf("Even Series");
    for (i = 2; i <= n; i+2)
    {
        printf("%d",i);
    }
}