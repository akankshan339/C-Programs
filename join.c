//to concat 2 string using function without using 3rd string;read 2 string in main prog ;
//and print concated string in calling func

#include<stdio.h>
void MyJoin(char s1[],char s2[]);
int main()
{
    char s1[10],s2[10];
    printf("Enter the string1 : \n");
    scanf("%[^\n]s",s1);
     printf("Enter the string2 : \n");
     fflush(stdin);
    scanf("%[^\n]s",s2);
    MyJoin(s1,s2);
    printf("concatinated string :\n%s ",s1);
    return 0;
}
void MyJoin(char s1[],char s2[])
{
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        i++;
    }
    s1[i]=' ';
    i=i+1;
    while(s2[j]!='\0')
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    return ;
}
//concate 2 string by using a third string 

/*#include<stdio.h>
void concat(char s1[],char s2[]);
int main()
{
    char s1[10],s2[10],s3[20];
    printf("Enter the string1 and string2: \n");
    scanf("%[^\n]s",s1);
    scanf("%[^\n]s",s2;
    s3=concat(s1,s2);
    printf("concatinated string :\n%s ",);
    return 0;
}
void concat(char s1[],char s2[])
{
    char s3[30];
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        s3[i]=s1[i];
        i++
    }
    s3[i]=' ';
    i=i+1;
    while(s2[j]!='\0')
    {
        s3[i]=s2[j];
        i++;
        j++
    }
    s3[i]='\0';
    return (s3);
}*/