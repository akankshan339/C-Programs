//convert temp from degree farheniet to degree centigrate
//F=(9/5)*C+32     OR     (F-32)*5/9=C
#include<stdio.h>
int main()
{
    float f,c=0;
    printf("enter temperture in degree farheniet :\n");
    scanf("%f",&f);
    c=(f-32)*5/9;
   
printf("Temperatue in degree centigrate  is: %0.2f",c);
return 0;
}