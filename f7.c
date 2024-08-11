//to write a chracter to the file 
//to write a string  using fputs() function
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
char st[10]="btech";
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("no such file exist ");
        exit(1);
    }
    fputs(st,fp); 
    fputs("CSE",fp);
   fclose(fp);
    return 0;
}