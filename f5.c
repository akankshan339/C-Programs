//to read a string from the file 
//to read a chracter using fgets() function
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
char st[20];
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("no such file exist ");
        exit(1);
    }
    fgets(st,6,fp); //here 6 represent no of chracters to be extracted from the file including one null chracter
    printf("The string I read from file is: %s ",st);  
   fgets(st,10,fp);
    printf("\nThe string I read from file is: %s ",st);  
    fclose(fp);
    return 0;
}