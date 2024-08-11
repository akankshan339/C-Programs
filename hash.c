//replace space by a # symbol in a string
#include<stdio.h>
#include<ctype.h>
int main()
{
    char st[20];
    printf("enter the string :\n");
    scanf("%[^\n]s",st);
    int i=0;
    while(st[i]!='\0')
    {
        st[i]=tolower(st[i]);
        if(st[i]==' ')
        st[i]='#';
        i++;
    }
       printf("modified string %s",st);
   return 0;
}


    
