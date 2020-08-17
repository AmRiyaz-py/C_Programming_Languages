/*
Program:- Write a program to print the PYRAMID PATTERN
            
Author:- AmRiyaz

Last Modifies:- 2020 August
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n,i,j,k,m;
    printf("Enter the number of lines to print:- ");
    scanf("%d",&n);
    m=n;
    for ( i = 0; i <= n; i++)
    {
        for (k = 1; k <= m; k++)
        {
            printf("");
        }
        for ( j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
        m--;
    }
    
}

