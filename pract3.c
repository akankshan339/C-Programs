# include<stdio.h>
# define FUN(i,j) i##j
int main()
{
int v1=10,v2=20;
printf("%d",FUN(v,1));
return 0;
}