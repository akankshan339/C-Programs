//accept n nos into an array if no is +ve subtract 2 from it if integer is -ve add 1 to it if 0 do nothing
//implement a UDF and using pointer 
#include<stdio.h>
void compute(int num[],int *ptr);
int main()
{
	int num[10],i,*ptr,n;
    ptr=num;
	printf("enter the size of array :\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        printf("enter the array elements :\n");
		scanf("%d",&num[i]);
    }
        compute(num,ptr);
        printf("%d ",*ptr);
        return 0;
}
    void compute(int num[],int *ptr)
    {
        ptr=num;
        int i,n;
	for(i=0;i<n;i++)
	{
		if(*ptr>0)
        {
        *ptr=*ptr-2;
       ptr++;
       }
        else if(*ptr<0)
        {
         *ptr=*ptr+1;
         ptr++;
         }
         else
		ptr++;
	}
	return;
	}