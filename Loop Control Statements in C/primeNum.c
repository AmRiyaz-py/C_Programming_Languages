/*
Program:- Check the entered number is prime or not(3,5,7,11..)

Author:- AmRiyaz

Last Modifies:- 2020 July
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){    
int n,i,m=0,flag=0;    
printf("Enter the number to check prime:-");    
scanf("%d",&n);    
m=n/2;    
for(i=2;i<=m;i++)    
{    
if(n%i==0)    
{    
printf("Number is not prime");    
flag=1;    
break;    
}    
}    
if(flag==0)    
printf("Number is prime");     
return 0;  
 }          