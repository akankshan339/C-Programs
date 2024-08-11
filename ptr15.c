//accept str using pointer & display the 1st letter of each word in upper case seprated them by a space 
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
    {
        char st[20],*cptr,s[20];
        int i=0;
       // strcat(" ",st);
        cptr=st;
        printf("enter the string :\n");
        gets(st);
        while(*cptr!='\0')
        {
       if(*cptr==' ')
       {
       s[i]=toupper(*(cptr+1));
       i++;
       s[i]=' ';
       i++;
       }
         cptr++;
        }
        s[i]='\0';
        printf("modified string %s",s);
        return 0;
        }
        