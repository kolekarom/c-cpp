#include<stdio.h>

int main()
{
    int no;
    int fact=1;
    printf("enter any number");
    scanf("%d",&no);
    if(no>=1){
        fact=no*fact;
        no--;
        {
            printf("factorial=%d",fact);
        }
    }
}