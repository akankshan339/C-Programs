//design a UDF  that return reversed string using pointers
#include<stdio.h>
#include<string.h>
void reverse(char st[]);
int main()
{
    char st[10]; 
    printf("enter the string :\n");
    gets(st);
    reverse(st);
    printf("reversed string :%s\n",st);
    return 0;
    }
void reverse(char st[])
{
 int i,len;
 char *fptr,*lptr,ch;
   fptr=st;
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
   
    return;
}
/*int main()
{
    char st[10]; 
    printf("enter the string :\n");
    gets(st);
    reverse(st);
   //fptr=printf("reversed string :%s\n",fptr);
    printf("reversed string :%s\n",st);
    return 0;
    }*/