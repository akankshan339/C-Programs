#include<stdio.h>
int main()
{
    int arr[10],i,n,countzero=0;
    printf("enter the size of array \n");
    scanf("%d",&n);
    printf("Enter array elements that is set of zeros and 1 \n");
    for(i=0;i<n;i++)
    {
scanf("%d",&arr[i]);
    }
    //counting no of zeros 
     for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        countzero++;
        }
        for(i=0;i<countzero;i++)
        {
            arr[i]=0;
        }
        //therefore no of 1's are size of array- no of zeros 
        for(i=countzero;i<n;i++)
        {
            arr[i]=1;
        }
        printf("array elements are :\n");
        for(i=0;i<n;i++)
        {
printf("%d ",arr[i]);
        }
return 0;
}