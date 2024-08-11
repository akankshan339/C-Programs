#include<stdio.h>
#include<string.h>
int mylength(char st[])
{
    int i=0;
    while(st[i]!='\0')
    {
i++;
    }
    return i;
}
void sort(char st[]){
    int i,j,l1;
    char tch;
   l1=strlen(st);
    for(i=0;i<l1;i++)
    {
        for(j=i+1;j<l1;j++)
        {
            if(st[i]>st[j])
            {
                tch=st[i];
                st[i]=st[j];
                st[j]=tch;
            }
        }
   }
    return;
}
int Isanagram(char s1[],char s2[])
{
    int i=0,flag=0,j=0;
    while (s1[i]!='\0')
    {
      if(s1[i]!=s2[j])
      {
      return 0;
    }
    i++;
    j++;
    }
return 1;
}
int main()
{
    char s1[10],s2[10];
    int i,c=0;
    printf("enter the string 1 :\n");
    gets(s1);
printf("enter the string 2 :\n");
    gets(s2);
    int l1=mylength(s1);
    int l2=mylength(s2);
sort(s1);
sort(s2);
printf("sorted string :%s %s \n",s1,s2);
c=Isanagram(s1,s2);
if((c==1)&&(l1==l2))
printf("anagram strings \n");
else
printf("not anagram string \n");
return 0;
}