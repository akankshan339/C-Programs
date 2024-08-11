//read a string and a character display index of 1st occurance of the character
#include<stdio.h>
 int search(char st[],char ch)
{
    int i=0,pos=0;
    while(st[i]!='\0')
    {
if(st[i]==ch)
{
    pos=i+1;
break;
}
i++;
    }
    return(pos);
}
 int main()
{
    int pos;
    char st[20],ch;
    printf("enter the string :\n");
    scanf("%[^\n]s",st);
    printf("enter the character:\n");
    fflush(stdin);
    scanf("%c",&ch);
pos=search(st,ch);
    printf("index of searched character :%d",pos);
    return 0;
}
