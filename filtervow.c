//wacp to read string transfer sentence by filtering all occurance articles 'a',an ,the into other aray
#include<stdio.h>
#include<ctype.h>
int main()
{
    char st[20],newst[20];
    int i=0,j=0;
    printf("enter string :\n");
    //scanf("%[^\n]s",st);
    gets(st);
    while(st[i]!='\0')
    {
        switch(tolower(st[i]))

        {
            case 'a':
            if(st[i+1]==' ')
            i=i+2;
             if(st[i+1]=='n'&&st[i+2]==' ')
            i=i+3;
            case 't':
            if(st[i+1]=='h'&&st[i+2]=='e'&&st[i+3]==' ')
            i=i+4;
            default:
            newst[j]=st[i];
            j++;
            i++;
        }}
        newst[j]='\0';
        fflush(stdin);
    printf("new string :\n%s",newst);
        return 0;
}

        

