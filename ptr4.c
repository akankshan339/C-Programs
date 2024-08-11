//using ponter wacp to read n elements into an aray & find sum and print the sum using pointer
#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
int main()
{
           int n,i,num[10],sum=0;
           int *ptr;
        
           //printf("enter the size of arary :\n");
           //scanf("%d",&n);
          
           for(i=0;i<5;i++)
           {
           printf("enter arary elements:\n");
            scanf("%d",&num[i]);
           }
           fflush(stdin);
          ptr=num;
           for(i=0;i<5;i++)
           {
            sum=sum+(*ptr);
            ptr=ptr+1;
           }
           printf("sum of array elements using pointers :%d",sum);
            return 0;
}