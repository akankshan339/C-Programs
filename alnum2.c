//sample input :ak@!an$%sh#&a*
//sample output :ak##an##sh##a#  freq of special chracters 7
//replace all special characters by # symbol and count freq of special chracters
#include<stdio.h>
#include<ctype.h>
int main(){
	char s[20];
    printf("enter the string :\n");
	gets(s);
	int i=0,freq=0;
	while(s[i]!='\0')
	{
		if(!(isalnum(s[i])))
		{
		s[i]='#';
		freq++;
		}
		i++;}
		s[i]='\0';
		printf("%s \n",s);
		printf("frequency of special characters :%d\n",freq);
		return 0;
	}

