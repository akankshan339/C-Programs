//using ponter wacp to check whether two strings are equal using pointer
//input :st1 =hello   st2 =hellow
//output : strings are not equal
#include<stdio.h>
//#include<string.h>
#include<ctype.h>
int main()
{
         int flag=0;
         char *ptr1,*ptr2;
         char st1[20],st2[20];
           ptr1=st1; 
           ptr2=st2;
           printf("enter the string1 :\n");
           gets(st1);
            printf("enter the string2 :\n");
           gets(st2);
           while(*ptr1!='\0'||*ptr2!='\0')                  //if one st is bigger or smaller than other 
           {
          if(*ptr1!=*ptr2)
          {
            flag=1;
            break;
          }
           ptr1++;
           ptr2++;                            
           }
           if(!flag)             //OR
          // if(flag==0)
           printf("strings are equal \n");
           else
           printf("strings are not equal \n");
           return 0;
}