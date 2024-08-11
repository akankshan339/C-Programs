//count no of puncations marks in a sentence
#include<stdio.h>
//#include<string.h>
#include<ctype.h>
int main()
{
char st[20];
    int i=0,count=0;
printf("enter string :\n");
//scanf("%[^\n]s",st);
fgets(st,sizeof st,stdin);
while(st[i]!='\0')
{
    if(ispunct(st[i]))
    count++;
    i++;
}
printf("no of puncation marks in string are:\n%d",count);
return 0;
}