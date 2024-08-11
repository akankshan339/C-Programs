#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*struct employee
{
   char empcod[5];
   char name[10];
   char occ[10];
   int sal;
};*/
int main()
{
   // struct employee emp;
    char str[10],empcode[5];
    int i,flag=0;
    FILE *fp;
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("no such file exist \n");
        exit(1);
    }
    printf("enter the employee code u want to search :\n");
     scanf("%[^\n]s",&empcode);
      if(fp!=NULL)
     {
        while (!feof(fp))
        {
        fscanf(fp,"%s",str);
        if(!strcmp(empcode,str))
        {
            for(i=1;i<=2;i++)
            
            fscanf(fp,"%s",str);
            
            flag=1;
            break;
            
        }
          if(flag==1)
          {
            printf("employee code :%s\n",empcode);
         printf("the salray is :%d\n",atoi(str));
         
     }}
    
        printf("not found ");
     }
     fclose(fp);
}