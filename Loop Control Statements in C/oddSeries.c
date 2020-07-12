/*
Program:-  Print the odd series 1,3,5,7,9....n

Author:- AmRiyaz

Last Modified:- 2020 July
*/

#include<stdio.h>
#include<conio.h>

int main(){
    int i,n;
    printf("Enter the Number you want to print the series:- ");
    scanf("%d",&n);
    printf("Odd Series");
    for ( i = 1; i <=n; i=i+2)
    {
        printf("%d",i);
    }
    
}