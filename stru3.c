//using typedef structure create a UDF and print the details in it of company
#include<stdio.h>
typedef struct company
{
    char compname[10];
    char empname[15];
    char code[6];
    char dob[15];
    int netpay;

}info;
void display(info det)          //info is the data type of det 
{
    printf("company name :%s\n",det.compname);
    printf("employee name :%s\n",det.empname);
    printf("code :%s\n",det.code);
    printf("date of birth :%s\n",det.dob);
    printf("company net pay :%d\n",det.netpay);
    
}
int main()
{                         
  info det;                         //det is a variable of user defined data type info
  printf("enter the company name:\n");
  gets(det.compname);
printf("enter the employee name:\n");
  gets(det.empname);
   printf("enter the company code:\n");
  gets(det.code);
   printf("enter the date of birth:\n");
  gets(det.dob);
   printf("enter the company net pay:\n");
 scanf("%d",&det.netpay);
  display(det);
  return 0;

}