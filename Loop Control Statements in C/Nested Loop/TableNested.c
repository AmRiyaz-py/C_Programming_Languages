/*
Program:- Write a program to print the table of n number 

Author:- AmRiyaz

Last Modifies:- 2020 August
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int n,i,j;
    printf("Enter the number to print the table:- ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        printf("Table of %d-",i); 
        for ( j = 1; j <= 10; j++)
        {
            printf("%4d",j*i);
        }
        printf("");
        
    }
    
}