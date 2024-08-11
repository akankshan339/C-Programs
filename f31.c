#include<stdio.h>
void operate(FILE *fp,FILE *fc)
{
    char ch;
while (!feof(fp))
{
    ch=fgetc(fp);
    if(!(ch>48&&ch<=57))
    fputc(ch,fc);
}
}
int main()
{
    FILE *fp,*fc;
    char st[]="2+2=4 but 2*2 is also 4 .Maths is quite intresting";
    fp=fopen("f2.txt","w+");
    fc=fopen("f3.txt","w+");
    if(fp!=NULL&&fc!=NULL)
    {
        fprintf(fp,"%s",st);
        rewind(fp);
        operate(fp,fc);
        rewind(fc);
        fgets(st,30,fc);
        printf("%s",st);
    }
    fclose(fp);
    fclose(fc);
}


