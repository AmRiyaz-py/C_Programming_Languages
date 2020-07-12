/*
Program:- Print the series 2,1,4,3,6,5....n,n-1

Author:- AmRiyaz

Last Modified:- 2020 July
*/

#include<stdio.h>
#include<conio.h>

int main(){
    int i,n,j;
    printf("Enter the number to print the series:- ");
    scanf("%d",&n);
    printf("Series is:");
    for ( i=1; i<=n; i++)
    {
        j=2*i;
        printf("%d",j);
        j=2*i-1;
        printf("%d",j);
    }
    
}