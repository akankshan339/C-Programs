//sorting of array
#include<stdio.h>
int main()
{
int n,i,j,temp,arr[n];
    printf("enter the size of the array:\n");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        }
         for(i=0;i<n;i++)
    {
        printf("sorted array is :\n%3d",arr[i]);
    }
    
   for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("sorted array is :\n%3d",arr[i]);
    }
   return 0;
}
