#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char ch,choice,lev,ans;
    start:
    printf("\033[104,93m------<THIS QUIZ CREATED BY ME >-----]\n");
    printf("<-----------!!!WELCOME INTO KBC BY AKANKSHA NEGI!!!-----------> \n");
    printf("Enter 'P' to Play the game and 'Q' to Quit the game >>> \n");
    printf("%65s\n%27s< P >PLAY%27s \n%27s< Q >QUIT%27s \033[0m",",",",",",",",","," );
    //printf("PLAY\n");
    //printf("QUIT\n");
    printf("Enter your choice :\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice=='P'||choice=='p')
    {
        level:
        printf("Enter the level of game >>>\n");
        printf("Enter 'E' for Easy 'M' for Medium and 'H' for Hard >>>\n");
        fflush(stdin);
        scanf("%c",&lev);
        if(lev=='E'||lev=='e')
        {
            printf("ARE YOU READY>>> \nALL THE BEST \n");
            printf("1. What is full for form of CSE \n");
            printf("a)corana social event                           b)commerce studies easy\n");
            printf("c)computer science engineering                  d)computer studies engineer\n");
            printf("LOCK YOUR ANSWER :\n");
            fflush(stdin);
            scanf("%c",&ans);
            if(ans=='C'||ans=='c')
            printf("Correct Answer \nConguralation aap 1 crore ruppay jeet gye hai!!! \n");
            else
            printf("Oops Wrong Answer!!! \n***Good Luck next time***\n");
        }
        else if(lev=='M'||lev=='m')
        {
            printf("ARE YOU READY FOR 2ND LEVEL \nALL THE BEST \n");
            printf("2. Who is the father of computer \n");
            printf("a)Charles Babbage                               b)Albert Einstien\n");
            printf("c)Elon Musk                                     d)Arayabhatta \n");
            printf("LOCK YOUR ANSWER \n");
            fflush(stdin);
            scanf("%c",&ans);
            if(ans=='A'||ans=='a')
            printf("Correct Answer \nConguralation aap 2 crore ruppay jeet gye hai!!!\n");
            else
            printf("Oops Wrong Answer!!! \n***Good Luck next time***\n"); 
        }
        else if(lev=='H'||lev=='h')
        {
            printf("ARE YOU READY FOR 3ND LEVEL \n ALL THE BEST \n");
            printf("2. Which of these is not a programming language \n");
            printf("a)python                                         b)c++ \n");
            printf("c)java                                           d)nestle \n");
            printf("LOCK YOUR ANSWER \n");
            fflush(stdin);
            scanf("%c",&ans);
            if(ans=='D'||ans=='d')
            printf("Correct Answer \nConguralation aap 3 crore ruppay jeet gye hai!!! \n");
            else
            printf("Oops Wrong Answer!!! \n***Good Luck next time***\n"); 
        }
        else
        {
        printf("********You entered Wrong Input level********* \n");
        goto level;
    }   
    }  //end of  level 
    else if(choice=='Q'||choice=='q')
    {
        printf("You want to Quit the KBC ? \n");
        printf("<---------Thanks for Participating-----------> \n");
        return 0;
    }
    else
    {
        printf("You entered Wrong Choice \n");
        goto start;
    }
    printf("<---------Want to Play again KBC ?----------> \n");
    printf("Enter Y for YES and N for NO \n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='Y'||ch=='y')
    goto level;
    else
    goto start;
    return 0;
}