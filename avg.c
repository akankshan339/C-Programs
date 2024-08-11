//average of 3 test scores
#include<stdio.h>
int main()
{
int t1,t2,t3,avg=0;
printf("enter the 3 test scores:\n");
scanf("%d%d%d",&t1,&t2,&t3);
if(t1>t2)
{
    if(t2>t3)
    {
        avg=(t1+t2)/2;
    }
    else
    avg=(t1+t3)/2;
}
else{
    if(t2>t1)
    {
        if(t1>t3)
        {
            avg=(t2+t1)/2;
        }
        else
        avg=(t2+t3)/2;

    }
}
   printf("average of 2 best test scores is%d  :",avg);
return 0;
}
//OR
/*int small=0,sum=0;
if((t1>t2)&&(t2>t3))
small=t3;
if((t2>t3)&&(t3>t1))
small=t1;
if((t3>t1)&&(t1>t2))
small=t2;
sum=(t1+t2+t3)-small;
avg=sum/2;
printf("avg of best 2 test scores is %d :\n",avg);

return 0;
}*/