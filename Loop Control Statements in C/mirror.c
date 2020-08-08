/*
Program:- Write a program to reverse or mirror image the entered number(Ex:- 153 = 351)

Author:- AmRiyaz

Last Modifies:- 2020 August
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int n,r,s = 0;
    printf("Enter the single number to reverse:- ");
    scanf("%d",&n);
    for (; n!=0;)
    {
        r = n%10;
        s = s*10+r;
        n = n/10;
    }
    printf("Sum is %d",s);
    
}