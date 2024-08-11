//command line argument
//argc no of aguments
//argv  is an arry of pointers store the values i.e the arguments
//by default argc=1 and argv contains the path and name of prog
#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("the value of argc is %d\n",argc);
    printf("this argument at index 0 has a value of %s\n",*argv);
    return 0;
}


   