//compute net salary by reading basic pay..... gross salary=(bp+hra+ta+da)
//hra=10% of bp      da=15% of bp        ta=5% of bp
#include<stdio.h>
int main()
{
    float bp,hra,da,ta,netsal;
    printf(" enter basic pay salary of :\n");
    scanf("%f",&bp);
    hra=(10*bp)/100;
    da=(15*bp)/100;
    ta=(5*bp)/100;
    netsal=(hra+da+ta);
    printf("net salary of employee:%0.2f",netsal);
    return 0;
}

