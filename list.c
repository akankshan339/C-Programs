#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node node1;
    node1.data=25;
    node1.link=NULL;
    struct node *linkptr;
    linkptr=&node1;
    node1.link=linkptr;

    struct node node2;
    node1.data=55;
    node1.link=NULL;
   // struct node *linkptr;
    node1.link=&node2;
    //node2.link=linkptr;
    printf("%d %d\n",node1.data,node1.link);
     //printf("%d %d\n",node2.data,node2.link);
}