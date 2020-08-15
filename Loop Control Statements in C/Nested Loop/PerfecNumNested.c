/*
Program:- Print the perfect number series.

Author:- AmRiyaz

Last Modifies:- 2020 August
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int i,n,r,j,s;
    printf("Enter the number upto generate perfect number:- ");
    scanf("%d",&n);
    for ( i = 1; i < n; i++)
    {
    s = 0;
        for ( j = 1; j < i; j++)
        {
            r = i%j;
            if (r==0)
            {
                s = s+i;
            }
            if (s==i)
            {
                printf("%d",i);
            }
            
        }
        
    }
    
}