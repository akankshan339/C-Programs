// to print values and adress of array elements using pointers
#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
int main()
{
int num[]={5,10,15,20};
int *ptr=num;

printf("value of first element is is: %d\n",num[0]);
printf("value of first element is: %d\n",*ptr);
printf("address of fist element of num is: %d\n",&num[0]);
printf("address fist element of num is: %d\n",ptr);
printf("value of second element is is: %d\n",num[1]);
printf("value of second element is is: %d\n",*(ptr+1));
printf("address of second element of is: %d\n",ptr+1);
printf("address of second element of is: %d\n",&num[1]);
printf("address of ptr is: %d\n",&ptr);
ptr++;
//printf("address of a is: %d\n",ptr);
//printf("address of a is: %d\n",ptr-2);
return 0;
}