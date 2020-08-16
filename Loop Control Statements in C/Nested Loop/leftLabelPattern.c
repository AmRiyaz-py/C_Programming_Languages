/*
Program:- Write a program to print the Pattern 
            *
            **
            ***
            ****
            *****
            
Author:- AmRiyaz

Last Modifies:- 2020 August
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int n , i ,j;
    printf("Enter the number of line s to print:- ");
    scanf("%d",&n);
    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf("*");
        }
    printf("\n");
    }
}