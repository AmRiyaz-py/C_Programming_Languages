/*
Program:- print the odd series 1,3,5,7,9,11......n using do - while loop

Author:- AmRiyaz

Last Modifies:- 2020 August
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int i ,n;
printf("Enter the number you want the series:- ");
scanf("%d",&n);
printf("Odd Series");
i = 1;
do
{
    printf("%d",i);
    i = i+2;
} while (i<=n);

}

