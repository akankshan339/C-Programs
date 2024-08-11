//pass argument from command line copy prime nos into another file

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int i,j,num,flag=0;
    char st[10];
   FILE *fp=fopen("f2.txt","w+");;
   FILE *fc=fopen("f3.txt","w+");
   if(fp==NULL)
{
    printf("file does not exist \n");
    exit(1);
}
 if(fp!=NULL&&fc!=NULL)
 {
    for(i=1;i<argc;i++)
    {
   flag=0;
   num=atoi(argv[i]);
    
           for(j=2;j<num;j++)
           {
            if(num%j==0)
            {
            flag=1;
            break;
            }
           }
            if(flag==0)
             fprintf(fc,"%d ",num);
           }
}
       rewind(fc);
       while(!feof(fc))
        {
             fgets(st,10,fc);
          printf("%s ",st);
        }
     fclose(fp);
     fclose(fc);
    return 0;
}


   