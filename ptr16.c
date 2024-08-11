//to reverse a an array using pointer
#include<stdio.h>
int main()
{
    int num[10],i,*ptr,n;
    ptr=num;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d",*(ptr+i));
    }
    return 0;
}