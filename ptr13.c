//accept a string and dispy the remaining string after the occurance of 1st space using UDF and pointer 
#include<stdio.h>
char *space(char st[]);
int main()
{
	char st[25];
    char *ptr;
	//int res;
    printf("enter the string :\n");
	gets(st);
    ptr=space(st);
    printf("string after 1st display if space is: %s ",ptr);
    return 0;
}
char *space(char st[])
{
    char *ptr;
    ptr=st;
    while(*ptr!='\0')
    {
if(*ptr==' ')
return(ptr);
//break;
ptr++;
}
//ptr++;
return NULL;
//return(ptr);
}
   
    
    