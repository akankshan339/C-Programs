#include<stdio.h>
int main(){
	char s1[20],s2[20];
	int i=0,j=0,m,n;
	printf("enter the string :\n");
	gets(s1);
	printf("enter the no of chracters to be extracted :\n");
	scanf("%d",&m);
	printf("enter the position of chracter from where to be extracted :\n");
	scanf("%d",&n);
	for(i=n-1;i<m+n-1;i++)
	{
		s2[j]=s1[i];
		j++;
	}
	printf("extracted string is :%s",s2);
	return 0;
	}
