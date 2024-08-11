//to calculate mean and standard devitation using UDF using pointer
//mean=sum of nos/total no of nos
//standard devitation=under root (1/n * (sum of nos - mean of nos ) ^2)
// sample input :1,2,3,4,5
//sum=15      mean=15/5 =3
//standard deviation = root [1/n *(15-3)^2 ]     stdev=5.37

#include<stdio.h>
#include<math.h>
void meanstd(int n,float num[5],float *mean,float *stddev);
int main()
{
float num[5],mean,stddev;
int n,i;
printf("enter the total no :\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter the nos:\n");
    scanf("%f",&num[i]);
}
meanstd(n,num,&mean,&stddev);
printf("mean is:%0.2f\n",mean);
printf("standard devitation is:%0.2f\n",stddev);
return 0;
}
void meanstd(int n,float num[5],float *mean,float *stddev)
{
    int i;
    float sum=0,add=0;
    for(i=0;i<n;i++)
    {
        sum=sum+num[i];
    }
    *mean=sum/n;

    add=add+pow((sum-*mean),2);
    *stddev=sqrt(add/n);
     return ;
}



