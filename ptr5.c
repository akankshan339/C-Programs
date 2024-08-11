//using ponter wacp to read n elements into an aray & print them and find reverse of them using pointer
#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
int main()
{
           int n,i,num[10],sum=0;
           int *ptr;
           printf("enter the size of arary :\n");
           scanf("%d",&n);
           for(i=0;i<n;i++)
           {
            printf("enter arary elements:\n");
            scanf("%d",&num[i]);
           }
           ptr=num;
           for(i=n-1;i>=0;i--)
           {
            sum=sum+(*ptr);
            ptr=ptr+1;
            printf("%d\n",*(ptr+i));
           // printf("%d\n",(ptr+i));
           }
           printf("sum of array elements using pointers :%d",sum);
            return 0;
}