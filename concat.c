//to concat two strings
#include<stdio.h>
int main()
{
    char s1[10],s2[10],s3[20];
    int i=0,j=0;
    printf("Enter the string1 and string2: \n");
    gets(s1);
    fflush(stdin);
    gets(s2);
    flush(stdin);
    while(s1[i]!='\0')
    {
        s3[i]=s1[i];
        i++;
    }
    while(s2[j]!='0')
    {
        s3[i]=s2[j];
        j++;
        i++;
    }
    s3[i]='\0';
    printf("concate string %s: \n",s3);
    return 0;
}

