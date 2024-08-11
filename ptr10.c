//wacp to accept a string implement a UDF to display freq of vowels & space ignore cases using pointers
#include<stdio.h>
#include<ctype.h>
void VowSpace(int *s,int *v,char st[])
{
int j=0;
while(st[j]!='\0')
{
    //st[j]=tolower(st[j]);
   /* if(st[j]=='a'||st[j]=='e'||st[j]=='i'||st[j]=='o'||st[j]=='u')
    {*(v)++;}*/
     if(st[j]==' ')
    {
    *(s++);
    }
    else if(st[j]=='a'||st[j]=='e'||st[j]=='i'||st[j]=='o'||st[j]=='u')
    {
        *(v++);
        }
    j++;
}
return ;
    }
int main()
{
    char st[20];
    int v=0,s=0;
    printf("enter the string :\n");
    gets(st);
    VowSpace(&s,&v,st);
    printf("no of vowels are :%d\n",v);
    printf("no of spaces are :%d",s);
    return 0;

}