/*
Program:- Find the sum of series 2 - 4 + 6 - 8 + 10

Author:- AmRiyaz

Last Modified:- 2020 July
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int s = 0;
    int i,j = 2;
    int n,k;
    printf("Enter the number of terms to add:- ");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        s = s+j*pow(-1,i+1);
        j=j+2;
    }
    printf("sum=%d",s);
    
}