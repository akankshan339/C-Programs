//WACP to create a file write 3 paragraphs to it  display the content of file and
//count freq of vowels and consonants and nos
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    FILE *fp=fopen("f1.txt","w+");
    char ch, st[20];
    int i=0,c=0,v=0,n=0;
    if(fp==NULL)
    {
        printf("no such file exist \n");
        exit(0);
    }
  if(fp!=NULL)
{
    while ((i<3))
    {
        fflush(stdin);
        printf("enter paragraph 1 : %d ",i+1);
        fgets(st,sizeof(st),stdin);
        fputs(st,fp);
        i++;
    }
}
//TO DISPLAY THE UPDATED CONTENT OF FILE IS 
rewind(fp);
printf("content of file :\n");
while(fgets(st,sizeof(st),fp)!=NULL)    //while(fp!=NULL)
{                                       //fgets(st,sizeof(st),fp)
    printf("%s",st);
    for(i=0;st[i]!='\0';i++)
    {
        ch=tolower(st[i]);
        if(isalnum(ch))
        {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        v++;
        else if(ch>=48&&ch<=57)
        n++;
        else
        c++;
    }
}}
printf("no of vowels %d",v);
printf("\nno of consonant %d",c);
printf("\nno of numbers %d",n);
return 0;
}

