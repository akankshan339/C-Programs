//WACP to read details of a student such name rollno & % marks display it 
#include<stdio.h>
struct student
{
    char name[10];
    int rollno;
    float pmarks;
};
int main()
{
    struct student std;
    printf("enter the name of student:");
    scanf("%s",std.name);
    printf("enter the roll of student:");
    scanf("%d",&std.rollno);
    printf("enter the percentage marks of student:");
    scanf("%0.2f",&std.pmarks);
    printf("Name :%s\nRoll no :%d\nPmarks :%0.2f\n",std.name,std.rollno,std.pmarks);
    return 0;
    }