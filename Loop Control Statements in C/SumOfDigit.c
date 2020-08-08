/*
Program:- FInd the sum of Individual digit of entered number (Ex 153:- 1+5+3=9)

Author:- AmRiyaz

Last Modifies:- 2020 August
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int n,r,s = 0;
    printf("Enter the single number to sum their individual digits:- ");
    scanf("%d",&n);
    for(;n!=0;){
        r = n%10;
        s = n/10;
    }
    printf("Sum is %d",s);
}