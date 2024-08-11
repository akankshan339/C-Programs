//to rev a string by storing into an another string
#include<stdio.h>
void reverse(char so[],char sr[])
{
    int i=0,j=0,len;
    while(so[i]!='\0')
    {
        i++;
    }
    len=i;
    j=i-1;
    i=0;
    while(j>=0)
    {
sr[i]=so[j];
i++;
j--;
    }
    sr[i]='\0';
    return ;
}
int main()
{
    char so[10],sr[10];
    printf("enter the string :\n");
    scanf("%[^\n]s",so);
    reverse(so,sr);
    printf("reversed string is :%s",sr);
    return 0;
}
