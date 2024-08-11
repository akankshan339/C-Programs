//calculate area of circle and area of rect and display biggest of 2 areas
#include<stdio.h>
int main()
{
    int l,b,r;
    float arcir=0,arrect=0;
    printf("enter length and bredth of rectangle :\n");
    scanf("%d%d",&l,&b);
    printf("enter radius of circle :\n");
    scanf("%d",&r);
    arcir=3.14*r*r;
    arrect=l*b;
printf("Area of circle is %0.2f:\n ",arcir);
printf("Area of rectangle is %0.2f:\n ",arrect);
if(arcir>arrect)
printf("..Area of circle is larger..\n");
else
printf("..Area of rectangle is larger..");
return 0;
}