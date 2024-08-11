//pridict the output
#include<stdio.h>
int main()
{
    FILE *fp=fopen("f2.txt","r+");  //if only read mode then nothing will get changed or add to file
    char st[50]="stitch in time saves nine\0";
    if(fp!=NULL)
    {
        fprintf(fp,"stitch in time saves nine");
        //or
        //fprintf(fp,"%s",st);
    }
    fclose(fp);
}