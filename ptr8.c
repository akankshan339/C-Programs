//to reverse a string using pointers
/*#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,j=0;
    char st[10],rev[10];
    char *ptr;
    ptr=st;
    printf("enter the string :\n");
    gets(st);
    len=strlen(st);
    for(i=len-1;i>=0;i--)
    {
       rev[j]=*(ptr+i);
       j++;
    }
    printf("reversed string :%s",rev);
    return 0;
    }*/               
    //2 nd METHOD
#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,j=0;
    char st[10],ch;
    char *fptr,*lptr;
    fptr=st;
    printf("enter the string :\n");
    gets(st);
    len=strlen(st);
    lptr=fptr+(len-1);
    for(i=0;i<len/2;i++)
    {
      ch=*fptr;
      *fptr=*lptr;
      *lptr=ch;
      fptr++;
      lptr--;
    }
    fptr=st;
    printf("reversed string :%s\n",fptr);
    printf("reversed string :%s\n",st);
    return 0;
}