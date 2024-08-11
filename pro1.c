#include<stdio.h>
int main()
{
//     int arr[10],i,n;
//     printf("enter how many elements \n");
//     scanf("%d",&n);
//     printf("enter the array elements \n");
//     for(i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//     }
//     printf("array elements are :\n");
// for(i=0;i<n;i++){
//     printf("%d ",arr[i]);
int a=0,b=1,sum=0,arr[10];
arr[0]=a;
arr[1]=b;
for(int i=2;i<7;i++)
{
    sum=0;
    sum=a+b;
    arr[i]=sum;
    a=b;
    b=sum;
    }
    printf("fibbonacci series is :");
    for ( int i = 0; i < 10; i++)
    {
       printf("%d ",arr[i]);
    }
    

}