// to toggle the string i.e to convert upper case into lower case and vice versa 

/*#include<stdio.h>
#include<ctype.h>
 void toggle(char st[])
{
    int i=0;
    while(st[i]!='\0')
    {
if((st[i]>=65)&&(st[i]<=90))
st[i]=tolower(st[i]);
else
st[i]=toupper(st[i]);
i++;
    }
    return ;
}
 int main()
{
    char st[20];
    printf("enter the string :\n");
    scanf("%[^\n]s",st);
    toggle(st);
    printf("toggled  string is :%s",st);
    return 0;
}*/                  
//                            OR       2nd method without using c type.h   but here we have to code for space
#include<stdio.h>
 void toggle(char st[])
{
    int i=0;
    while(st[i]!='\0')
    {
if((st[i]>=65)&&(st[i]<=90))
st[i]=st[i]+32;
else if
(st[i]=st[i]-32);
else
st[i]=' ';
i++;
    }
    return ;
}
 int main()
{
    char st[20];
    printf("enter the string :\n");
    scanf("%[^\n]s",st);
    toggle(st);
    printf("toggled  string is :%s",st);
    return 0;
}
