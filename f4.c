//to read a chracter using fgetc() function
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
char ch;
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("no such file exist ");
        exit(1);
    }
    ch=fgetc(fp);
    printf("The chracter I read from file is %c :",ch);  
     ch=fgetc(fp);
    printf("\nThe chracter I read from file is %c :",ch);  
    fclose(fp);
    return 0;
}