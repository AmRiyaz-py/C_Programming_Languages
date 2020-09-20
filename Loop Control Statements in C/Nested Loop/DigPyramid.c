/*
Program:- Write a program to print 
            1
           1 2
          1 2 3
         1 2 3 4
        1 2 3 4 5
            
Author:- AmRiyaz

Last Modifies:- 2020 September
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int n,i,j,k,m;
    printf("Ente rthe number up to print the series:- ");
    scanf("%d",&n);
    m=n;
    for(j = 1; j <= n; j++){
        for(k = 0; k<m; k++){
            printf(" ");
            for(i = 1; i<=j; i++){
                printf("%4d",i);
                printf("\n");
                m--;
        }
    }
}