//count no of chracters in a file 
#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
#include<ctype.h>
int main()
{
    int chracters=0;
    char ch;
    FILE *fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("no such file exist \n");
        exit(0);
    }
    if(fp!=NULL)
    {
    while (!feof(fp))
    {
       ch=fgetc(fp);
       if(!isspace(ch)||ch=='\n')
       chracters++; 
    }
}
printf("no of words %d",chracters);
fclose(fp);
return 0;
}