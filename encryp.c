//accept a string encrypt it i.e and replace each letter by its previous letter & 'a' with z & A with Z
//input: the two days are never the same
//output: sgd svn czxr zqd mdudq sgd rzld
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
            if(st[i]=='a')
            st[i]='z';
            else if(st[i]=='A')
            st[i]='Z';
            else
            st[i]=st[i]-1;
      }
      i++;
}
printf("encrypted string is :\n%s",st);
//again decryp the encrypted string
 i=0;
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
printf("decrypted string is :\n%s",st);
return 0;
}

//return 0;
//}

    /*char st[20];
    int i=0;
    char ch;
    printf("enter the string:\n");
     scanf("%[^\n]s",st);
     //l=strlen(encrp);
    // scanf("%d",&n);
     //printf("enter the names:\n");
     while(st[i]!='\0')
      {
if(st[i]!=' ')
{
      if(st[i]=='a')
        st[i]='z';
           else if(st[i]=='A')
            st[i]='Z';
      
      else
st[i]=st[i]-1;
}
i++;
}

    
     printf("encrypted string is:\n%s",st);

   return 0;
}*/
