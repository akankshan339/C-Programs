//to concatinate 2 string using pointers implement using UDF
#include<stdio.h>
void concat(char *ptr1,char *ptr2);
int main()
{
char st1[15],st2[8];
printf("enter both the strings :\n");
gets(st1);
gets(st2);
concat(st1,st2);
printf("conactinated string is :%s",st1);
return 0;
}
void concat(char *ptr1,char *ptr2)//store address of strings
{
    int i=0,j=0;
    while(*ptr1!='\0')
    {
      //*ptr1[i]=*ptr1[i];// no need of copying ptr1 to ptr1.. ptr1 is pointing to base of str1
        ptr1++;            //increasing base address of ptr1 till null of str1
    }                      //now ptr1 is pointing at null of str1
    while(*ptr2!='\0')
    {
      //*ptr1[i]=*ptr2[j];   ///no need
    *ptr1=*ptr2; //copying base address of ptr2 to ptr1(i.e from there at which ptr1 is pointing to null)
        ptr1++;
        ptr2++;
    }
    *ptr1='\0';
    return;
}