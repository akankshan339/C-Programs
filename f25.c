//pass argument from command line i.e from terminal pass some strings after./a.exe my name is akanksha
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int i;
    printf("the value of argc is %d\n",argc);
    for(i=0;i<argc;i++)
    {
    printf("this argument at index %d has a value of %s\n",i,argv[i]);
    }
    return 0;
}


   