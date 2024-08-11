#include <stdio.h>
#include<math.h>
int main()
{
    char username[15];
    int password;
    printf("---------------LOGIN PAGE ---------------\n ");
    printf("Username :");
    scanf("%[^\n]s",username);
    printf("\nPassword :");
    scanf("%d",&password);
   // scanf("%[^\n]s",password);
    if(password==12345)
    {
        printf("------------Successfully Login------------------\n");
    }
    else
    printf("Login failed try again \n");
    return 0;
}
