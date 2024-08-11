//by using UDF swap the nos in cyclic order using pointers
//sample input :a=1 b=2 c=3 
//sample output :a=3 b=1 c=2
#include<stdio.h>
 void cyclic(int *a,int *b,int *c)
    {
    int temp;
    temp=*c;
    *c=*b;
    *b=*a;
    *a=temp;
    return ;
    }
int main()
{
    int a,b,c;
    printf("enter the value of a b and c \n");
    scanf("%d%d%d",&a,&b,&c);
    printf("the initial values are a=%d b=%d c=%d ",a,b,c);
    cyclic(&a,&b,&c);
    printf("\nvalues in cyclic order are :a=%d b=%d c=%d",a,b,c);
    return 0;

}