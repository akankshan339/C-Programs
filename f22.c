//WACP  to read from an existing file that contains about  2 paragraphs is seprated by a new line character
//and is present in current path then transfer all the chracters except the special charters and space to
//another file and dusplay the newly created file in the screen
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    FILE *fp=fopen("f1.txt","r");
 FILE *fc=fopen("f2.txt","w");   //to also print the updated conten in console we use w+
char ch;
if(fp==NULL&&fc==NULL)
{
    printf("no such file exist \n");
    exit(1);
}
if(fp!=NULL&&fc!=NULL)
{
    while(!feof(fp))
    {
        ch=fgetc(fp);
        if(isalnum(ch))
        fputc(ch,fc);

    }
}
//to display the content of file in the console 
rewind(fc);
while((ch=fgetc(fc))!=-1)
{
    printf("%c",ch);
}
fclose(fp);
fclose(fc);
return 0;
}