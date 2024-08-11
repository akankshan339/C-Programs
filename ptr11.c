//accept n nos into an array then multiply all integers by 2 then divide by 3.implement using pointer display modified array
#include<stdio.h>
int main()
{
	int num[10],i,n;
	int *ptr;
	printf("enter the size of array :\n");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
        printf("enter the array elements :\n");
		scanf("%d",&num[i]);
	}
    ptr=num;
	for(i=0;i<5;i++)
	{
		*ptr=(*ptr)*2;
		*ptr=(*ptr)/2;
		printf("%d ",*ptr);
		ptr++;
	}
	return 0;
	}