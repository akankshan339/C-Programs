//sum of n natural nos
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter the number upto which sum is to calclute :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
printf("sum of numbers upto %d is %d:",n,sum);
return 0;
}