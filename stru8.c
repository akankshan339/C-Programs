//input name, id, pan no, salary, department,address of an employee
# include<stdio.h>
struct employee
{
   char name[5],dept[5],add[5];
   int id,pan,sal;
};
int main()
{
    struct employee emp[5];
    int n,i;
    printf("enter no of employee \n");
    scanf("%d",&n);
    printf("..............Enter details of employee ..........\n");
    for(i=0;i<n;i++)
    {
        printf("Enter employee %d name-- \n",i+1);
       // fflush(stdin);
        scanf("%s",emp[i].name);
        printf("Enter employee id --\n");
        scanf("%d",&emp[i].id);
         printf("Enter employee pan no --\n");
        scanf("%d",&emp[i].pan);
         printf("Enter employee salary --\n");
        scanf("%d",&emp[i].sal);
         printf("Enter employee depart --\n");
         fflush(stdin);
        scanf("%s",emp[i].dept);
        printf("Enter employee address --\n");
        fflush(stdin);
        scanf("%s",emp[i].add);
         }
        printf("Details of employee are ..........\n");
    for(i=0;i<n;i++)
    {
       printf("for employee %d \n",i+1);
        printf("NAME: %s\t\tID: %d\tPAN NO:%d\tSALARY: %d\tDEPARTMENT: %s\tADDRESS: %s\t ",emp[i].name, emp[i].id,emp[i].pan, emp[i].sal, emp[i].dept, emp[i].add);
         }
return 0;
}
 