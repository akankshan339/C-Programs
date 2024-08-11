//array of structures read details of n students & find avg marks scored by class 
#include<stdio.h>
struct student
{
    char name[5][10];
    int rollno;
    float pmarks;
};
int main()
{
    struct student std[5];
    int i,n;
    float sum,avg;
    printf("enter the no of students: ");
    scanf("%d",&n);
    printf("enter the name of student roll no and % marks:");
    for(i=0;i<n;i++)
    {
    printf("enter the name roll no and % marks of student:");
    scanf("%s%d%f",std[i].name,&std[i].rollno,&std[i].pmarks);
    sum=sum+std[i].pmarks;
    }
    avg =sum/n;
     printf("the avg marks of the class is %0.2f ",avg);
    return 0;
    }