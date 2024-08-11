#include<stdio.h>
#include<ctype.h>
int frequency(char st[]);
int main()
{
    char st[20];
    int freq=0;
    printf("enter the string :\n");
    scanf("%[^\n]s",st);
   freq=frequency(st);
   printf("frequency of vowels present in string is %d",freq);
   return 0;
}
int frequency(char st[])
{
    int i=0,c=0;
    while(st[i]!='\0')
    {
        st[i]=tolower(st[i]);
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
     c++ ;
        i++;
    }
    return(c);
}
    
