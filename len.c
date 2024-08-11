//to find length of string and check for no vowels  in it

#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[20],vow[10];
    int i=0,j=0;
   printf("\nenter the string:\n");
    scanf("%[^\n]s",&str);
    while(str[i]!='\0')
    {
     str[i]=tolower(str[i]);
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
        vow[j]=str[i];
        i++;
        j++;
        }}
    
    printf("length of string is %d:/n",i);
   // printf("no of vowels %d:\n",j-1);
   // printf("string containg vowel is %s :\n",vow);
    return 0;
}