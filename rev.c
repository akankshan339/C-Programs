//to reverse a string by using a single string
#include<stdio.h>
#include<ctype.h>
int main()
{
    char st[20],tempch;
    int i=0,len,j=0;
    printf("enter the string :\n");
    scanf("%[^\n]s",st);
        while(st[i]!='\0')
    {
        i++;
         }
        len=i;
        j=len-1;
        for(i=0;i<len/2;i++)
        {
            st[i]=tolower(st[i]);
           tempch=st[i];
           st[i]=st[j];
           st[j]=tempch;
           j--;
        }
        printf("reversed string is :%s\n",st);
         return 0;
}

                     // OR
//to reverse a string and check whether it is palindrome
/*#include<stdio.h>
#include<ctype.h>
int main()
{
    char st[20],rev[20];
    int i=0,len,j=0,flag=0;
    printf("enter the string :\n");
    scanf("%[^\n]s",st);
        while(st[i]!='\0')
    {
        i++;
         }
        len=i;
        for(i=len-1;i>=0;i--)
        {
            st[i]=tolower(st[i]);
            rev[j]=st[i];
            j++;
        }
        rev[j]='\0';
        i=0;
        while(i<len)
        {
            if(st[i]==rev[i])
            {
        flag=1;
        break;
        }
        i++;
        }
        if(flag==0)
        printf("%s is not palindrome :\n",st);
        else
        printf("%s is palindrome :\n",st);
        return 0;
}*/

