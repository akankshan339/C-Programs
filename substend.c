//implement a function substrEnd(S,T) which returns 1 if substring Tends with stringn S and zero otherwise
//wacp to accept string in main and display msg in calling prog
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool substrEnd(char st[],char subst[]);
int main()
{
char st[20],subst[10];
printf("enter the string :\n");
scanf("%[^\n]s",st);
fflush(stdin);
printf("enter the substring :\n");
scanf("%[^\n]s",subst);
if(substrEnd(st,subst))
printf("yes string ends with substring \n");
else
printf("no string does not ends with substring \n");
return 0;
}
bool substreEnd(char st[],char subst[])
{

int len,l,i;
len=strlen(st);
l=strlen(subst);
if(l>len)
return false;
for(i=0;i<l;i++){
if(st[len-i]=subst[l-i])
return false;
}
return true;

}


