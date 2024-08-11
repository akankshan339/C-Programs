//read string extract vowels and print by capitalising them
#include <stdio.h>
#include<ctype.h>
void ExtractVow(char st[],char vow[])
{
  int i=0,j=0;
while(st[i]!='\0')
{
  if(st[i]=='A'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U'||st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
  {
  vow[j]=st[i];
  j++;
  }
  i++;
}
vow[j]='\0';
j=0;
  while(vow[j]!='\0')
  {
    if(islower(vow[j]))
    vow[j]=toupper(vow[j]);
    j++;
  }
  return ;
}

int main()
{
  char st[20],vow[10];

  printf("Input a string\n");
scanf("%[^\n]s",st);
ExtractVow(st,vow);
printf("string containg vowels :\n%s",vow);
return 0;
}

