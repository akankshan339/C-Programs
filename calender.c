#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int op,mon,start,totday,first=1,day,i,b=1;
    printf("Enter the Month of the Year for which u want the calender of 2023>>> \n");
    scanf("%d",&mon);
   // fflush(stdin);
    switch (mon)
    {
        case 1:
        start=7;
        totday=31;
        break;
        case 2:
        start=3;
        totday=28;
        break;
        case 3:
        start=3;
        totday=31;
        break;
        case 4:
        start=6;
        totday=30;
        break;
        case 5:
        start=1;
        totday=31;
        break;
        case 6:
        start=4;
        totday=30;
        break;
        case 7:
        start=6;
        totday=31;
        break;
        case 8:
        start=2;
        totday=31;
        break;
        case 9:
        start=5;
        totday=30;
        break;
        case 10:
        start=7;
        totday=31;
        break;
        case 11:
        start=3;
        totday=30;
        break;
        case 12:
        start=5;
        totday=31;
        break;
        default:
        printf("Entered Month dosent exist \n");
    }
    printf("\n *********************** CALENDER  2023 ************************* \n\n");
    printf("\n************************ MONTH %d******************************** \n\n",mon);
    printf("\n\tMON   \tTUE   \tWED   \tTHU   \tFRI  \tSAT  \tSUN  \n\n");
    fflush(stdin);
    switch(start)
    {
    case 1:
    printf("\t%d",first);
    break;
    case 2:
    printf("\t\t%d",first);
    break;
    case 3:
    printf("\t\t\t%d",first);
    break;
    case 4:
    printf("\t\t\t\t%d",first);
    break;
    case 5:
    printf("\t\t\t\t\t%d",first);
    break;
    case 6:
    printf("\t\t\t\t\t\t%d",first);
    break;
    case 7:
    printf("\t\t\t\t\t\t\t%d",first);
    break;
    default:
    printf("WRONG CHOICE!!!\nThis case does not exist\n");  
    }
    
    day=8-start;
    for(i=2;i<=day;i++)
    {
        printf("\t%d",i);
    }
    fflush(stdin);
    printf("\n");
    for(int j=day+1;j<=totday;j++)
    {
        if(b==8)
        {
        printf("\n");
        b=1;
        }
        printf("\t%d",j);
        b++;
    }
    printf("\n");
     printf("\n  ***********************************************************\n");
    getch();
   // } while(op!=0);
    //return 0;
}