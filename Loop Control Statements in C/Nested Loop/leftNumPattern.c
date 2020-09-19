/*
Program:- Write a program to print the Number Pattern on left
            1
            12
            123
            1234
            12345
            
Author:- AmRiyaz

Last Modifies:- 2020 August
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n,i,j;
    printf("Enter the number upto print the series:- ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",j);
            
        }
        printf("\n");
        
    }
    
}