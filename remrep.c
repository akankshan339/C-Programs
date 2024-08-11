//to remove repeated characters
//input akanksha is nice
//output aknsh i ce
#include<stdio.h>
#include<string.h>
int main()
{
	char st[20];
    printf("enter the string :\n");
	gets(st);
	int i,j,k,freq=0;
	for(i=0;i<strlen(st);i++)
	{
		for(j=i+1;j<st[j]!='\0';j++)
		{
			if(st[j]==st[i])
			{
				for(k=j;k<st[k]!='\0';k++)
				{
					st[k]=st[k+1];
				}
			}
		}
	}
	printf("string after removing repeated chracters :%s",st);
		return 0;
	}

