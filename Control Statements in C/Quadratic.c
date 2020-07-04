/*
Program:- Find the square root of the quadratic equation ax2+bx+c

Author :- AmRiyaz

Last Modified:- July 2020
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    float a,b,c,d,x1,x2,y;
    printf("Enter the value of a,b,c:- ");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0){
        x1 = -b/(2*a);
        x2 = x1;
        printf("Both the roots are equal");
        printf("X1=%f X2=%f",x1,x2);
    }        
    else
    {
        if (d>0)
        {
            x1 = (-b/(2*a))+sqrt(d)/(2*a);
            x2 = (-b/(2*a))-sqrt(d)/(2*a);
            printf("Both the roots are different");
            printf("X1=%f X2=%f",x1,x2);
        }
        else
        {
            y = sqrt(fabs(d));
            x1=-b/(2*a);
            printf("Both are imaginery");
            printf("%f+%fi\n%f-%fi",x1,y,x1,y);
        }
        
    }
    
}






