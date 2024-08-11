//to reverse a string and check whether it is palindrome
#include<stdio.h>
#include<ctype.h>
int main()
{
    char st[20];
    int i=0,len,j=0,flag=0;
    printf("enter the string :\n");
    scanf("%[^\n]s",st);
        while(st[i]!='\0')
    {
        i++;
         }
        len=i;
        j=len-1;
        for(i=0;i<len-1;i++)
        {
            st[i]=tolower(st[i]);
            if(st[i]!=st[j])
            {
            flag=1;
            break;
         }
           j--;
        }
        if(flag==1)
        printf("%s is not palindrome :\n",st);
        else
        printf("%s is palindrome :\n",st);
        return 0;
}
