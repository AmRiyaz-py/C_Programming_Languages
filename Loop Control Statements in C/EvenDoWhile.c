/*
Program:- print the even series 2,4,6,8,10,12......n using do - while loop

Author:- AmRiyaz

Last Modifies:- 2020 August
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
int i,n;
printf("Enter the number to want the series:- ");
scanf("%d",&n);
printf("Even Series");
i =2;
do
{
    printf("%d",i);
    i = i+2;
}
while(i<=n);
}