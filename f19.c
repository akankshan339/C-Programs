//count no of words in a file 
#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
#include<ctype.h>
int main()
{
    int words=0;
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
 ch=fgetc(fp);     //we dont use fgets here bcz it will read whole string & fscanf will read upto 1st space
       if(isspace(ch)||ch=='\n')
       words++; 
    }
}
printf("no of words %d",words);
return 0;
}