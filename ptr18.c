//to calculate median and range of n observatons using pointers dispaly them in calling program implement using UDF
//here n=6 even    nos are : 4,2,8,9,5,3     after sorting 2,3,4,5,8,9
//median  :(4+5)/2 =4.5     range=2+9=11
#include<stdio.h>
void medianrange(int n,float num[],float *median,float *range)
{
    int i,j,temp,big,small;
   for(i=0;i<n;i++)                         //for sorting the observations so as to calculate median
    {
for(j=0;j<n-1;j++)
{
    if(num[j]>num[j+1])
    {
        temp=num[j];
        num[j]=num[j+1];
        num[j+1]=temp;
    }}}
          if(n%2==0)                           //for calculating median if the no of obsev. are even or odd 
        *median=(num[n/2]+num[(n/2)-1])/2;
        else
        *median=num[n/2];
        //for calclutating range
      big=num[0];
         for(i=0;i<n;i++)
         {
            if(num[i]>big)
            big=num[i];
         }
          small=num[0];
         for(i=0;i<n;i++)
         {
            if(num[i]<small)
            small=num[i];
         }
         *range=big+small;
         return;
}
int main()
{
    int n;
    float num[5],median,range;
   
    printf("enter the value of n :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    printf("enter the array elements :\n");
    scanf("%f",&num[i]);
    }
    medianrange(n,num,&median,&range);
    printf("median of n observation :%0.2f\n",median);
    printf("range of n observation :%0.2f\n",range);
    return 0;
}
 