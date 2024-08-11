//to delete a paricular word from the string 
#include <stdio.h>
#include <string.h>
int main()
{
// Initialize string and word
char str[100],word[100];
int i=0,j=0,k;
printf("Enter the string\n");
gets(str);
printf("Enter the word\n");
gets(word);
for(i=0;i< strlen(str);i++ )
{
while(str[i]==word[j]&&word[j]!='\0') //To search the word in string
{
for(k=i;str[k]!='\0';k++)
{
str[k]=str[k+1]; //To override the word by next words
}
j++;

}
}
printf("String after the Deleting the Word is\n\n%s",str);
return 0;
}
