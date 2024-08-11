//leap year
#include<stdio.h>
int main()
{
int yr;
printf("enter the year :\n");
scanf("%d",&yr);
if(yr%400==0)
{printf("leap year \n");
}
elseif(yr%100==0);
{
printf("not a leap year \n");
}
elseif(yr%4==0)
{
    printf("leap year \n");
}
else
printf("not a leap year \n");
return 0;
}
