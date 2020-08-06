/*
Program:- Check the entered number is perfect number of not(ex. 6 is perfect number, 1+2+3 = 6)

Author:- AmRiyaz

Last Modifies:- 2020 July
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int i , a, n ,r ,s = 0;
    printf("Enter the number to check perfect or not :- ");
    scanf("%d",&n);
    for ( i = 1; i <= (n/2); i++)
    {
        r = n%i;
        if (r == 0)
        {
            s=s+1;
        }
        if (s==n)
        {
            printf("Numbe is Perfect:- ");
        }
        else
        {
            Printf("NUmber is not perfect:- ");
        }
        
        
    }
    
}
