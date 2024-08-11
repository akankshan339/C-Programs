//accept str and charcter to be search design UDF return str after search chracter is form(inclusive of chracter)
//i.e display the search remaining string after the seach charcter is formed including the character
#include<stdio.h>
#include<string.h>
char *findchar(char st[],char ch);
int main()
{
	char st[25],ch;
    char *ptr;
    printf("enter the string :\n");
	gets(st);
    printf("enter the chracter the chracter to be searched :\n");
    ch=getchar();
    ptr=space(st,ch);
    if(ptr!=NULL)
    printf("string is: %s ",ptr);
    printf("not found");
    return 0;
}
char *findchar(char st[],char ch)
{
    char *ptr;
    ptr=st;
    while(*ptr!='\0')
    {
if(*ptr==ch)
return(ptr);
//break;
ptr++;
}
//ptr++;
return NULL;
//return(ptr);
}
   
    
    