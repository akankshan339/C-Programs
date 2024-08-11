//count no of vowels
#include <stdio.h>
int main()
{
  int i = 0, count = 0;
  char s[20];

  printf("Input a string\n");
  gets(s);

  while (s[i] != '\0') {
    if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] =='o' || s[i]=='O' || s[i] == 'u' || s[i] == 'U')
      count++;
    i++;
  }
  printf(" no of vow :%d\n",count);
  return 0;
}