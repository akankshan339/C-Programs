//to count vowels and consonants and also display the content of file
//also calculate the size of file 
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    FILE *fp=fopen("f1.txt","r");
    int vow=0,cons=0,byte=0;
    char ch,st[20];
    if(fp==NULL)
    {
        printf("no such file exist \n");
        exit(0);
    }
    if(fp!=NULL)
{
    while(!feof(fp))
    {
        ch=fgetc(fp);
        if(ch!=EOF)
        {
            byte++;
        }
        if(isalpha(ch))
        {
            ch=tolower(ch);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            vow++;
            else
            cons++;
        }
    }
}
//printing also the content of file in console
rewind(fp);
while(!feof(fp))
{
fgets(st,20,fp);
printf("%s\n",st);
}
fclose(fp);
printf("size of file is %d byte\n",byte);
printf("\nno of vowels present in the content of file is %d\n",vow);
printf("no of consonant present in the content of file is %d\n",cons);
return 0;
}