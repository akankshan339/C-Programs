//take 2  files in main program as even and odd containg even and odd nos
//
#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
//#include<ctype.h>
int main()
{
    char st[12],sto[6],ste[6];
    int num;
    FILE *fm=NULL,*fe=NULL,*fo=NULL;
 fe=fopen("f1.txt","r");  //fe even file
 fo=fopen("f2.txt","r");   //fo odd   file
fm=fopen("f3.txt","w+");    //merge even and odd file nos
if(fe==NULL&&fo==NULL&&fm==NULL)
{
printf("no such file exist \n");
exit(1);
}
    if(fe!=NULL&&fo!=NULL&&fm!=NULL)
    {
        while(!(feof(fe)&&feof(fo)))
        {
        fscanf(fo,"%s",sto);
           num=atoi(sto);
           fprintf(fm,"%d ",num);
        
        fscanf(fe,"%s",ste);
           num=atoi(ste);
           fprintf(fm,"%d ",num);
        }
        
    }
        rewind(fm);
        while(!feof(fm))
        {
             fgets(st,10,fm);
          printf("%s ",st);
        }
     fclose(fe);
     fclose(fo);
     fclose(fm);
     return 0;
        }