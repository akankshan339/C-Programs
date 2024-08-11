//to clculate length of string
#include<stdio.h>
#include<string.h>
int main()
{
char s1[10];
int i,l=0;
printf("enter the string: \n");
scanf("%[^\n]s",s1);
l=strlen(s1);
printf("length is :%d\n",l);
return 0;
}