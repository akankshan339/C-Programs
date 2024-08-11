//using ponter to print address, value of ptr and variable
#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
int main()
{
int a=20,b=25;
int *ptr=&a;
int *ptr2;
ptr2=&b;
printf("value of a is: %d\n",a);
printf("value of a is: %d\n",*ptr);
printf("address of a is: %d\n",ptr);
printf("address of a is: %d\n",&a);
printf("address of ptr is: %d\n",&ptr);
ptr++;
printf("address of a is: %d\n",ptr);
printf("address of a is: %d\n",ptr-2);
return 0;
}