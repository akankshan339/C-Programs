#include<stdio.h>
struct dob
{
    int d,y;
    char m;
}
struct doa
{
    int dd,yy;
    char mm;
}
struct student
{
    char name[10];
    int rlno;
    struct dob db;
    struct doa da;
}
void display(student std)
{
    printf("Name :%s",std.name);
    printf("Roll no :%d",std.rlno);
    printf("Date of birth :%d %s %d",std.db.d,std.db.m,std.db.y);
    printf("Date of addmision :%d %s %d",std.da.dd,std.da.mm,std.da.yy);
    return ;
}
int main()
{
    struct student std;
    printf("Enter the details :\n");
    printf("enter the name and roll no :\n");
    scanf("%s%d",std.name,&std.rlno);
    printf("enter the date of birth :\n");
    scanf("%d%s%d",&std.db.d,std.db.m,&std.db.y);
     printf("enter the date of addmission :\n");
    scanf("%d%s%d",&std.da.dd,std.da.mm,&std.da.yy);
    display(std);
    return 0;
}
