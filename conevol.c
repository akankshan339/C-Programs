//enter no of cones ...find vol of 1 cone and vol of total no of cones
#include<stdio.h>
int main()
{
    int n;
    float r,h,vol=0,totvol=0;
    printf("enter total no of cones :\n");
    scanf("%d",&n);
    printf("enter radius and height of cone :\n");
    scanf("%f%f",&r,&h);
    vol=(1*3.14*r*r*h)/3;
   totvol=n*vol;
printf("Volume of 1 cone is : %0.2f\n ",vol);
printf("Total volume of %d cones is : %0.2f\n ",n,totvol);
return 0;
}