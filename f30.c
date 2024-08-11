//pridict the output
#include<stdio.h>
void fun(FILE *fp)
{
    char st[]={"I am from uttrakhand"};
    fputs(st,fp);
}
int main()
{
    FILE *fp=fopen("f2.txt","w+");
    if(fp!=NULL)
    {
    fun(fp);
    printf("size of file is :%d",ftell(fp));
}
fclose(fp);
}

//or
/*int fun(FILE *fp)
{
    int byte=0;
    char st[]={"I am from uttrakhand"};
    fputs(st,fp);
    while (!feof(fp))
    {
      char ch=fgetc(fp);
       if(ch!=EOF)
       byte++;
    }
    return (byte);
}
int main()
{
    FILE *fp=fopen("f2.txt","w+");
    if(fp!=NULL)
    {
   int byte=fun(fp);
    printf("size of file is :%d",byte);
}
fclose(fp);
}*/