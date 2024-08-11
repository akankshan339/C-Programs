//WACP to read details of n student such name rollno & marks  in 3 subj display their % 
#include<stdio.h>
struct marks
{
    char name[10];
    int rollno;
    float phymark,chemark,mathmark;
   };
int main()
{
    struct marks ma[5];
    int n,i;
    float percent[5];
    printf("enter the no of students :\n");
    scanf("%d",&n);
    printf("enter the name ,roll no and marks in phy, chem, maths of students:\n");
    for(i=0;i<n;i++)
    {
    scanf("%s%d%f%f%f",ma[i].name,&ma[i].rollno,&ma[i].phymark,&ma[i].chemark,&ma[i].mathmark);
    }
    for(i=0;i<n;i++)
    {
    percent[i]=((ma[i].phymark+ma[i].chemark+ma[i].mathmark)/300)*100;
    printf("percentage marks : %0.2f\n",percent[i]);
    }
   
   // printf("Name :%s\nRoll no :%d\nPmarks :%0.2f\n",std.name,std.rollno,std.pmarks);
    return 0;
    }