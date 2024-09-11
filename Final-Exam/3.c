#include<stdio.h>

void main()
{
    int len;
    
    printf("Enter len : ");
    scanf("%d",&len);
    
    int a[len];
    int i;
    
    for(i=0;i<len;i++)
    {
        printf("Enter elements : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The nagetive numbers are : ");
    for(i=0;i<len;i++)
    {
        if(a[i]<0)
        {
            printf("%d",a[i]);
        }
    }
    
}
