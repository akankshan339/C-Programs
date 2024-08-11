//enter the radius of circular park..find dist covered by cyclist in taking n rounds of park in Km
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    float r,peri=0,totdist=0,distkm=0;
    printf("enter the number of rounds cyclist take :\n");
    scanf("%d",&n);
    printf("enter radius of circular park:\n");
    scanf("%f",&r);
   peri=2*3.142*r;
   totdist=n*peri;
   distkm=totdist/1000;
printf("Distance covered in 1 round is %0.2f:\n",peri);
printf("total distance covered in %d rounds is: %0.2f\n",n,totdist);
printf("Distance in Kilomeaters is:%0.2f",distkm);
return 0;

}