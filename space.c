//count no of spaces in a string
#include <stdio.h>
//#include<string.h>
#include<ctype.h>
int main() {
    char st[15];
    int i=0,countspace=0;
    printf("enter the string :\n",st);
   // scanf("%[^\n]s",st);
    //OR
    gets(st);
    while(st[i]!='\0')
    {
    if(isspace(st[i]))
    countspace++;
    i++;
    }
    printf("number of spaces are =%d",countspace);
     return 0;
}