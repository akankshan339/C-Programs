//using UDF and pointer compare 2 strings
#include<stdio.h>
int compare(char st1[],char st2[]);
int main()
{
	char st1[10],st2[10];
	int res;
    printf("enter the string 1:\n");
	gets(st1);
    printf("enter the string 2:\n");
	gets(st2);
res=compare(st1,st2);
if(res==0)
printf("strings are unequal");
else
printf("strings are equal");
return 0;
}
int compare(char st1[],char st2[])
{
	char *p1,*p2;
	p1=st1;
	p2=st2;
	while(*p1!='\0'||*p2!='\0')
	{
		if(*p1!=*p2)
		return 0;
		p1++;
		p2++;
		}
		return 1;
}