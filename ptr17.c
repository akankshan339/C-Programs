//swap nos in cyclic order using pointer implement using UDF //INPUT : a=1,b=2,c=3  OUTPUT: a=3,b=1,c=2
#include<stdio.h>
void swap(int num,int n);
int main()
{
    int num[5],n,i;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    swap(num,n);
    printf("%d a=,%db=,%dc=",num[0],num[1],num[2]);
    return 0;
}
void swap(int num,int n)
{
    int *ptr;
    ptr=num;
int i=0,temp;
temp=(ptr[n-1]);
for(i=n-2;i>=0;i--)
{
ptr[i+1]=ptr[i];
}
ptr[0]=temp;
return;
}