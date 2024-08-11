//print vowels by capitalising all vowels 
//sample input :akanksha negi
//sample output :AAAEI
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void vowel(char s1[20],char vow[20])
{
	int i=0,j=0;
	while(s1[i]!='\0')
	{
		if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
		{
			if(s1[i]>='A'&&s1[i]<='Z')
			{
			s1[i]=tolower(s1[i]);
			vow[j]=s1[i];
			j++;}
			else
			{
			s1[i]=toupper(s1[i]);
			vow[j]=s1[i];
			j++;}
			}
		i++;
		}
        vow[j]='\0';
		return ;
		}
		int main(){
	char s1[20],vow[20];
	int i=0,j=0,flag=0;
    printf("enter the string :\n");
	gets(s1);
	//scanf("%s",&s1);
	vowel(s1,vow);
	printf("vowels after capatelizing :%s\n",vow);
	return 0;
	}