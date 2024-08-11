//caclulating remainder and quotient
#include<stdio.h>
int main()
{
    int n1,n2;
    float rem,quo;
    printf(" enter first and second no :\n");
    scanf("%d%d",&n1,&n2);
    if(n2!=0)
    {
    rem=n1%n2;
    quo=n1/n2;
     printf("reminder is: %0.1f\n",rem);
     printf("quotient is: %0.1f\n",quo);
    }
    else
    printf("canoot be divisble by zero \n");
    return 0;
}