/*
Program:- Write a program for fitting a straight line through a set of points
            (xi,yi); i = 1,2,3... The straight line equation is -y=mx + c and the 
            value of m and c are given by -
            m = (nE(xi,yi)-(Exi)(Eyi))/((Ex^2i)-(Exi)^2)
            c = (Eyi - mExi)/n 
            All summation are from 1 to n.

Author:- AmRiyaz

Last Modifies:- 2020 July
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float x,y,sumx=0,sumy=0,sumxy=0,sumx2=0,m,c=0;
    int i,n;
    printf("Enter the total number of point:- ");
    scnaf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        printf("Enter set number %d:- ",i);
        scanf("%f%f",&x,&y);
        sumx = sumx+x;
        sumy = sumy+y;
        sumxy = sumxy + x*y;
        sumx2 = sumx2+x*x;
    }
    m = (n*sumxy - sumx*sumy)/(n*sumx2 - pow(sumx,2));
    c = (sumy-m*sumx)/n;
    printf("m=%f\n c=%f",m,c);
    
}