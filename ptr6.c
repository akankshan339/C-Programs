//using ponter wacp to find length of string and find vowels and display them using pointer
#include<stdio.h>
//#include<string.h>
#include<ctype.h>
int main()
{
  int n,i,len=0;
  char *ptr;
    char st[20];
ptr=st; //adress of st can be allocated here or after taking the st bcz while declareing array address has already been allocated to array 
           //char st[]={"akanksha negi"};
           // OR
           printf("enter the string :\n");
           gets(st);
           while(*ptr!='\0')                  //*ptr store  1st value of string
           {
          len++;
           ptr++;                             //adress of *ptr is increased by the size of char
           }
           printf("length of string is:%d\n",len);
           ptr=st;
           printf("vowels in string are :");
            while(*ptr!='\0')                  //*ptr store  1st value of string
           {
            *ptr=tolower(*ptr);
            if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
            printf("%c,",*ptr);
            ptr++;
           }
           return 0;
}