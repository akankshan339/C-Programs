//to seprate nos from a file into two another files as odd and even nos  
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch,newstr[11],sto[6],ste[6];
    int num;
    FILE *fp=NULL,*fe=NULL,*fo=NULL;
 fp=fopen("f1.txt","r");
 fe=fopen("f2.txt","w");
fo=fopen("f3.txt","w");
    if(fp!=NULL&&fe!=NULL&&fo!=NULL)
    {
        while(!feof(fp))
        {
           fscanf(fp,"%s",newstr);
           num=atoi(newstr);
           if(num%2!=0)
          fprintf(fo,"%d\n",num);
          else
          fprintf(fe,"%d\n",num);
        }
    }
     fclose(fp);
    fclose(fo);
    fclose(fe);

    fe=fopen("f2.txt","r");
fo=fopen("f3.txt","r");
//display in console

printf("odd nos are :\n");
if(fo!=NULL)
{
    while(!feof(fo))
    {
        //printf("odd nos are :\n");
        fgets(sto,3,fo);
        printf("%s ",sto);
    }
}
 printf("even nos are :\n");
if(fe!=NULL)
{
    while(!feof(fe))
    {
      //  printf("even nos are :\n");
        fgets(ste,3,fe);
        printf("%s ",ste);
    }
}
 //fclose(fp);
    fclose(fo);
    fclose(fe);

}