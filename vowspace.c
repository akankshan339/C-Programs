//wacp to accept a string implement a UDF to display freq of vowels & space ignore cases
#include<stdio.h>
#include<ctype.h>
void VowSpace(char st[],int num[])
{
int i=0,v=0,s=0;
while(st[i]!='\0')
{
    st[i]=tolower(st[i]);
    if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
    v++;
    else if(st[i]==' ')
    s++;
    i++;
}
num[0]=v;
num[1]=s;
return;
    }
int main()
{
    char st[20];
    int num[5];
    printf("enter the string :\n");
    gets(st);
    VowSpace(st,num);
    printf("no of vowels are :%d\n",num[0]);
    printf("no of spaces are :%d",num[1]);
    return 0;

}