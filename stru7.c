#include<stdio.h>
void increment(invent *invt);
typedef struct inventry
{
    int itemcode;
    int price;
    int qnty;
}invent;
int main()
{
    invent invt;
    printf("enter the details :\n");
    scanf("%d%d%d",&invt.itemcode,&invt.price,&invt.qnty);
    increment(&invt);                  //using call by reference
    printf("new price %d",invt.price);
    return 0;
}
void increment(invent *invt)
{
invt->price=invt->(price*(10/100))+invt->price;
return ;
}