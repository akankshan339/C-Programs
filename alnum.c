//alnum means alphabets and numbers and therfore not of alnum means all special chracters
//sample input :ak@!an#$sh%&a*
//sample output :@!#$%&*
#include<stdio.h>
#include<ctype.h>
void Special(char st[],char sep[])
{
    int i=0,j=0;
    while(st[i]!='\0')
{
        if(!(isalnum(st[i])))
        {
         if(st[i]!=' ')
         {
            sep[j]=st[i];
            j++;
         }}
         i++;
}
         sep[j]='\0';

    return ;
}
int main()
{
char st[50],sep[50];
printf("enter the string :\n");
gets(st);
Special(st,sep);
printf("the special characters in string are :%s",sep);
return 0;
}