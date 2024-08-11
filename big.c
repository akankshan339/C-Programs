//biggest of 3 nos
#include<stdio.h>
int main()
{
int n1,n2,n3,big=0;
printf("enter the 3 number:\n");
scanf("%d%d%d",&n1,&n2,&n3);
big=n1;
if(n2>big)
big=n2;
    
if(n3>big)
    big=n3;
   printf("biggest of 3 nos is%d:",big);
return 0;
}
