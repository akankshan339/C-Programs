//calculate size of structure 
//without using #pragma pack(1) size of below structure is 16 which also include size of char array e.g=10 here
//using padding #pragma pack(1) size of below given structure is 14
#include<stdio.h>
//#pragma pack(1)
struct student
{
    char name;
    char sec;
    int rollno;
    int class;
    float pmarks;
};
int main()
{
    struct student std;
    printf("size of structure is : %d",sizeof(std));
    return 0;
}