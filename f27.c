//wacp to print first 100 and last 100 bytes of file followed by 1st 10 bytes of file 
#include<stdio.h>
int main()
{
    char str[100];
    int len;
    FILE *fp;
    fp=fopen("data.bin","r");
    len=ftell(fp);
    if(fp!=NULL)
    {
       
        fseek(fp,0L,SEEK_SET);  //or SEEK_SET=1
        fgets(str,100,fp);
        printf("first 100 bytes are: %s",str);
//for last 100 bytes of file we need length of file
     // fseek(fp,len,SEEK_SET);
      fseek(fp,0L,SEEK_END);
        fseek(fp,-100L,SEEK_END);
        fgets(str,100,fp);
        printf("last 100 bytes are: %s",str);

       rewind(fp);
       //or
        //fseek(fp,0L,SEEK_SET);
        fgets(str,10,fp);
        printf("first 10 bytes are: %s",str);
    }
    fclose(fp);
}