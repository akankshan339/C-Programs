#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{

    FILE *fp=fopen("f2.txt","r+");
    FILE *fe=fopen("feven","w+");
    FILE *fo=fopen("fodd","w+");
    char str[6],ch;
    int i,num;
    for(i=0;i<argc;i++)
    {
    // scanf("%s",argv[i])
     fprintf(fp,"%s",argv[i]);
    }
    rewind(fp);
    while(fp!=NULL)
    {
        fscanf(fp,"%s",st);
        num=atoi(st);
        if(num%2==0)
        fprintf(fe,"%d",num);
        else
        fprintf(fo,"%d",num);
    }
    else{
    printf("no such file exist \n")
    exit(1);
}
    rewind(fe);
    rewind(fo);
    rewind(fp);
    for(i=0;i<argc;i++)
    {
        printf("%s",fp);
    }
  
     printf("\n even nos are :");
     while(fe!=NULL)
     {
     ch=fgetc(fe);
     printf("%c",ch);
     }
     printf("\n odd nos are :");
     while(fo!=NULL)
     {
     ch=fgetc(fo);
     printf("%c",ch);
     }
     fclose(fp);
fclose(fe);
fclose(fo);
return 0;
}
