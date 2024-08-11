/*Output of C program to count number of vowels in a string:
C program to count number of vowels in a string output

C program to count vowels in a string using function*/
#include<stdio.h>
int count_vowels(char []);
int check_vowel(char);
int main()
{
   char array[20];
   int c;
   printf("Enter a string\n");
   gets(array);
   c = count_vowels(array);
   printf("Number of vowels: %d\n", c);
   return 0;
}
int count_vowels(char a[])
{
   int count = 0, c = 0, flag;
   char d;
   do
   {  
      d = a[c];
     flag = check_vowel(d);
     if (flag == 1)
         count++;
     c++;
   } while (d != '\0');
   return count;
}
int check_vowel(char ch)
{
   if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      return 1;
 
   if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
      return 1;
   return 0;
}


