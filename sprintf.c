//to read an integer no and a float no calculate sum and join the sum to a string named 
// n=5,n1=100.84   SUM:105.84
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    float n1,sumnum=0;
    char SUM[5],joinst[10];
    printf("enter the integer no and float no :\n");
    scanf("%d%0.2f",&n,&n1);
    printf("enter the string :\n");
    scanf("%s",SUM);
    sumnum=(n+n1);
    sprintf(joinst,"%f"sumnum);
    SUM=strcat(SUM,joinst);
    printf("%s",SUM);
    return 0;

}