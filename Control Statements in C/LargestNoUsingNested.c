#include<stdio.h>
#include<conio.h>

void main(){
    int a,b,c;
    printf("Enter all three numbers:- ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("A is greater %d",a);
        }
        else
        {
            printf("C is greater %d",c);
        }
        
        
    }
    else
    {
        if (b>c)
        {
            printf("b is greater %d",b);
        }
        else
        {
            printf("C is greater %d",c);
        }
        
        
    }
    
    
}