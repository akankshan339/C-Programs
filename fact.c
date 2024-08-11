//fctorial of no
#include<stdio.h>
int main()
{
    int n,fact=1,i;
    printf("enter the number whose factorial is to calclute :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
printf("factorial of %d is %d:",n,fact);
return 0;
}