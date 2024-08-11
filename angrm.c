//all chracters that occurs for the same no of times in another string irrespective of their order
//sample input : listen
//sample output :silent       (both are anagram to each other)
#include<stdio.h>
#include<string.h>
int main(){
	char s1[20],tch,s2[20];
	int i=0,j=0,flag=0,l1,l2;
    printf("enter the string 1 :\n");
	scanf("%s",&s1);
    printf("enter the string 2 :\n");
	scanf("%s",&s2);
	l1=strlen(s1);
    l2=strlen(s2);
	for(i=0;i<l1;i++)      //sorting string 1
	{
		for(j=i+1;j<l1;j++)
		{
			if(s1[i]>s1[j])
			{
				tch=s1[i];
				s1[i]=s1[j];
				s1[j]=tch;
			}}}
		for(i=0;i<l2;i++)             //sorting string 2
	{
		for(j=i+1;j<l2;j++)
		{
			if(s2[i]>s2[j])
			{
				tch=s2[i];
				s2[i]=s2[j];
				s2[j]=tch;

		}}}
		if((strcmp(s1,s2)==0)&&(l1==l2))    
		flag=1;
		if(flag==1)
		printf("strings are anagram ");
		else
		printf("strings are not anagram ");
     return 0;
	}