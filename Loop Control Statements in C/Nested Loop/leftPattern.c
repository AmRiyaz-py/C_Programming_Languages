/*
Program:- Write a program to print the Pattern 
            *****
            ****
            ***
            **
            *
            
Author:- AmRiyaz

Last Modifies:- 2020 August
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int n,i,j;
    printf("Enter the number of lines to print:- ");
    scanf("%d",&n);
    for ( i = n; i >= 0; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
}