/*
Program:- Find the sum of series (cos X Series) 1-x^2/2! + x^4/5! - x^6/6! + x^8/8!

Author:- AmRiyaz

Last Modifies:- 2020 July
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float n,s=0,a=1,x,y,i=1,j;
    printf("Enter the term of series:- ");
    scanf("%f",&n);
    printf("Enter the values in degree:- ");
    scnaf("%f",&y);
    x = (y*22)/(180*7);
    a=1;
    for (j = 1;  j<= n; j++,i=i+2)
    {
        s= s+a;
        a= (-1)*a*x*x/((i+1)*(i+2));
    }
    printf("cos(%f)=%f",y,s);
}