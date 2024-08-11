//using ponter to print address, value of ptr and variable
#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
int main()
{
int a=20;
int *ptr=&a;
printf("value of a is: %d\n",a);
printf("address of a is: %d\n",ptr);              //integer value
printf("address of a is: %p\n",ptr);
printf("address of a is: %x\n",ptr);             //hexadecimal value
printf("value of a is: %d\n",*ptr);
printf("address of pointer to a is: %p\n",&ptr);

return 0;
}