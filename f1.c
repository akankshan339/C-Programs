//to read a file 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char str[20];
    //char ch='a';
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("ERROR HAS OCCURED ");
        exit(1);
    }
  //  ch=fgetc(fp);
   // printf("%c",ch);
   fscanf(fp,"%s",str);
    printf("the content of this file is:\n %s ",str);
    fclose(fp);
    return 0;
}