//UDF  to check string is palindrome
#include<stdio.h>
int IsPalin(char st[]);
int main()
{
    int p=0;
    char st[10];
    printf("Enter the string : \n");
    scanf("%[^\n]s",st);
   p=IsPalin(st);
    if(p==1)
    printf("%s is a palindrome string :\n ",st);
    else
    printf("%s is  not a palindrome string :\n ",st);
    return 0;
}
int IsPalin(char st[])
{
    int i=0,j=0,len;
    while(st[i]!='\0')
    {
       i++;
    }
    len=i;
    j=i-1;
    for(i=0;i<=len/2;i++)
    {
        if(st[i]!=st[j])
        {
        return 0;
        j++;}
        else
        return 1;

    }
}