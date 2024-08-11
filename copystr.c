//copy one string to another string using function; read string in main func; print in calling func
#include<stdio.h>
void copystr(char st[],char copy[]);
int main()
{
    char st[20],copy[20];
    printf("Enter the string :\n"); 
    scanf("%[^\n]s",st);
    copystr(st,copy);
    printf("copied string :\n",copy);
    return 0;
}
void copystr(char st[],char copy[])
{
    //char copy[20];
    int i=0;
while(st[i]!='\0')
{
    copy[i]=st[i];
    i++;
}
copy[i]='\0';
return ;
}