#include<stdio.h>
#include<string.h>
//#include<ctype.h>
int main()
{
    char name[20][10],ser[20];
    int i,n,flag=0;
    printf("enter the total no of names to be entered:\n");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     { printf("enter the names:\n");
     fflush(stdin);
        scanf("%[^\n]s",name[i]);
     }
     printf("enter name to be serched:\n");
     fflush(stdin);
    scanf("%[^\n]s",ser);
     for(i=0;i<n;i++)
     {
        if(strcmp(name[i],ser)==0)
     {
        flag=1;
        break;
     }}
     if(flag==1)
     printf("found");
     else
     printf("not found");
   return 0;
}
