//using functions remove spaces from string print the modified string in calling program
#include<stdio.h>
void space(char st[])
{
   
    int i=0,j=0;
    while(st[i]!='\0')                   //OR    for(i=0;i<strlen(st);i++)
    {                                     //        {      
        if(st[i]==' ')                    //         if(st[i]==' ')
        {                                 //          {
            j=i;                          //            j=i;
            while(st[j]!='\0')             //      for(j=0;j<strlen(st);j++)
            {                               //        {
                st[j]=st[j+1];               //          st[j]=st[j+1]; 
                j++;                         //           j++:
            }}                               //          }}
            st[j]=st[i];                       //      st[j]=st[i];
            j++;                               //       j+=;
            i++;                                //       i++;}
        }              
         return ;
         }
   
int main()
{
    char st[20];
    printf("enter the sentence:\n");
    scanf("%[^\n]s",st);
     space(st);
    printf("The string is :\n%s",st);
 return 0;
}
