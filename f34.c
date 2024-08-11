#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{

    FILE *fp=fopen("f2.txt","w+");
    FILE *fe=fopen("feven","w+");
    FILE *fo=fopen("fodd","w+");
    char st[15],ch;
    int i,num;
    for(i=1;i<argc;i++)
    {
     fprintf(fp,"%s",argv[i]);
    }
    rewind(fp);
    //if(fp!=NULL)
    //{
      //  while(!feof(fp))
       // {
        while((fscanf(fp,"%s",st))!=EOF)
        //while(ch=fgetc(fp)!=EOF)
        {
       num=atoi(st);
        if(num%2==0)
        fprintf(fe,"%d",num);
        //fprintf(fe,"%s",st);
        else
        fprintf(fo,"%s",st);
        }
   // else
    //{
   // printf("no such file exist \n");
   // exit(1);
//}
    //}
    rewind(fe);
    rewind(fo);
    printf("\n NUMBER.TXT :");
    for(i=1;i<argc;i++)
    {
        printf("%s ",argv[i]);
    }
  
     printf("\n even nos are :");
     while(!feof(fe))
    {
     ch=fgetc(fe);
    // while(ch!=EOF)
     printf("%c ",ch);
     }
     printf("\n odd nos are :");
     while(!feof(fo))
     {
     ch=fgetc(fo);
     // while(ch!=EOF)
     printf("%c ",ch);
     }
    fclose(fp);
    fclose(fe);
    fclose(fo);
return 0;
}
