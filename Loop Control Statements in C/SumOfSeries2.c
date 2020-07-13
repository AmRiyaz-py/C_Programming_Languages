/*
Program:- Find the sum of 1 -3 + 5 - 7 + 9 -11

Author:- AmRiyaz

Last Modified:- 2020 July
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
    int s = 0;
    int i,j = 1;
    int n,k;
    printf("Enter the number of term to add:- ");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        s=s+j*pow(-1,i+1);
        j=j+2;
        printf("Sum = %d",s);
    }
    
}