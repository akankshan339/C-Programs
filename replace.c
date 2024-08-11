//to replace spaces by a # symbol in a string by using function
#include<stdio.h>
#include<ctype.h>
void replace(char st[]);
int main()
{
    char st[20],mod[20];
  // int i=0;
    printf("enter the string :\n");
    scanf("%[^\n]s",st);
   replace(st);
   printf("modified string %s",st);
   return 0;
}
void replace(char st[])
{

    int i=0;
    while(st[i]!='\0')
    {
        st[i]=tolower(st[i]);
        if(st[i]==' ')
        st[i]='#';
        i++;
    }
    return ;
}
    
