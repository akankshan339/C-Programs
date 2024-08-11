//copy the content of one file to another by removing space also display the content of the newly updated file to output screen
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    FILE *fp=fopen("f1.txt","r");
 FILE *fc=fopen("f2.txt","w+");    //to also print the updated conten in console we use w+
    char ch;
    if(fp==NULL&&fc==NULL)
    {
        printf("no such file exist \n");
        exit(0);
    }
  if(fp!=NULL&&fc!=NULL)
{
    while(!feof(fp))
    {
        ch=fgetc(fp);
        if(ch!=' ')
        fputc(ch,fc);
        }
}
//TO DISPLAY THE UPDATED CONTENT OF FILE IS 
rewind(fc);
while((ch=fgetc(fc))!=-1)
{
    printf("%c",ch);
}
fclose(fp);
fclose(fc);
return 0;
}

