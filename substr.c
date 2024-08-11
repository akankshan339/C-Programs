//to extract substring from a string
#include<stdio.h>
#include<ctype.h>
int main()
{
    char st[20],subst[20];
    int i,j=0,stpos,endpos;
    printf("enter the string :\n");
    scanf("%[^\n]s",st);
    printf("enter start and end position of substring:\n");
    scanf("%d%d",&stpos,&endpos);
     for(i=stpos-1;i<endpos;i++)
        {
            st[i]=tolower(st[i]);
            subst[j]=st[i];
            j++;
        }
        subst[j]='\0';
        printf("extracted string is :%s\n",subst);
        return 0;
}
