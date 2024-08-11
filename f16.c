//to calculate size of a binary file i.e an image file
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    fp=fopen("WhatsApp Image 2023-04-06 at 18.47.49.jpeg","rb");
    float byte=0;
    char ch;
    if(fp==NULL)
    {
        exit(0);
    }
    if(fp!=NULL)
    {
    while(!feof(fp))
    {
   ch=fgetc(fp);
   if(ch!=EOF)
   byte++;
    }
}
if(byte>1000)
{
    byte=byte/1000;
    printf("size is %0.2f kb ",byte);
}
else
printf("size is %0.2f bytes ",byte);
fclose(fp);
return 0;
}