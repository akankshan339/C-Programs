//sum of odd nos and even nos
#include<stdio.h>
int main()
{
    int n,sum=0,i,oddsum=0,evensum=0;
    printf("enter the number upto which sum of odd  and even no is to calclute :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        evensum=evensum+i;
        else
        oddsum=oddsum+i;
    }
printf("sum of even numbers upto %d is %d:",n,evensum);
printf("sum of odd numbers upto %d is %d:",n,oddsum);
return 0;
}