/*
Program:- Write a program to print 
            ABCDEFGFEDCBA
            ABCDEF FEDCBA
            ABCDE   EDCBA
            ABCD     DCBA
            ABC       CBA
            AB         BA
            A           A 

            
Author:- AmRiyaz

Last Modifies:- 2020 September
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int n,i , j ,k, m =1;
    char x;
    printf("Enter the upper alphabet upto print the series:- ");
    scanf("%c",&x);
    n = x;
    for ( i = n; i >= 65; i--)
    {
        if (i==n)
        {
            k = i-1;
        }
        else
        {
            k = i;

        }
        for ( j = 65; j <= i; j++)
        {
            printf("%c",j);
        }
        if (i!=n)
        {
            for ( j = 1; j <= m; j++)
            {
                printf("");
            }
        m  = m+2;
        for ( j = k; j >= 65; j--)
        {
            printf("%c",j);
        }
        printf("\n");
        }
    }
    
}