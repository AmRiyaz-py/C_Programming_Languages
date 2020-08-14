/*
Program:- Print prime Number Series in Nested Loop 

Author:- AmRiyaz

Last Modifies:- 2020 August
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int i,n,r,j;
    printf("Enter the Number upto generate prime number:- ");
    scanf("%d",&n);
    for ( i = 2; i <=n; i++)
    {
        for ( j = 2; j < i; j++)
        {
            r = j%i;
            if (r==0)
            {
                break;
            }
            
        }
    if (r!=0)
    {
        printf("%d",i);
    }
    
    }
    
}