#include<stdio.h>

void main()
{
    int num;
    
    printf("Enter any number : ");
    scanf("%d",&num);
    
    if(num%2==0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
}
