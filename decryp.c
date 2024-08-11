//accept a string decrypt it i.e and replace each letter by its next letter & 'z' with a & Z with A
//input : the two days are never the same
//output encrypted string: sgd svn czxr zqd mdudq sgd rzld
//output decrypted string: the two days are never the same
#include<stdio.h>
//#include<string.h>
#include<ctype.h>
int main()
{
      char st[100];
printf("enter string :\n");
scanf("%[^\n]s",st);
int i=0;
while(st[i]!='\0')
{
      if(isalpha(st[i]))
      {
            if(st[i]=='z')
            st[i]='a';
            else if(st[i]=='Z')
            st[i]='A';
            else
            st[i]=st[i]+1;
      }
      i++;
}
printf("%s",st);
return 0;
}
