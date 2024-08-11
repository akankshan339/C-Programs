//input name, id, pan no, salary, department,address of an employee using function
# include<stdio.h>
typedef struct employee
{
   char name[5],dept[5],add[5];
   int id,pan,sal;
}emplo;

void getdata(emplo emp[],int n)
{
   // emplo emp[5];
    int i;
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
        // fflush(stdin);
        scanf("%s",emp[i].dept);
        printf("Enter employee address --\n");
       // fflush(stdin);
        scanf("%s",emp[i].add);
}
 //display(emp,n);
}

void display(emplo emp[],int n)
{
    int i;
    printf("Details of employee are ..........\n");
    for(i=0;i<n;i++)
    {
       printf("for employee %d \n",i+1);
        printf("NAME:%s\tID:%d\tPAN NO:%d\tSALARY:%d\tDEPARTMENT:%s\tADDRESS:%s\n",emp[i].name, emp[i].id, emp[i].pan, emp[i].sal, emp[i].dept, emp[i].add);
         }
}

int main()
{
 emplo emp[5];
    int n;
    printf("enter no of employee \n");
    scanf("%d",&n);
     getdata(emp,n);
     display(emp,n);
    return 0;
}
 