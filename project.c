#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
struct order
{
char foodname[10];
float price;
int qnt;

};
/*void dilevertime(int hr,int min,int sec)
{
     if(hr>12||min>60||sec>60)
    {
        printf("ERROR ENTER WITH TIME \n");
    }
    while(1)
    {
      sec++;
      if(sec>59)
      {
        min++;
        sec=0;
      }
      if(min>59)
      {
        hr++;
        min=0;
      } 
    } 
      return;
}*/
int main()
{
   struct order od[4];
   FILE *fp=fopen("binfile.txt","rb");
   int opt,i,cho,hr,min,sec;
   char ch;
printf("WELCOME TO PIZZA DILEVERY POINT \n");
printf("WHAT DO YOU WANT\n");
printf("Enter 1:to view the menu \n");
printf("Enter 2:to order something \n");
printf("DO YOU WANT TO CONTINUE ENTER 'Y' FOR YES AND 'N' FOR NO ");
scanf("%c",&ch);
while(ch=='y')
{
printf("ENTER YOUR OPTION \n");
scanf("%d",&opt);
if(opt==1)
{
    printf("HERE IS OUR FOOD SERVICE MENU \n");
  //  fwrite(&od,sizeof(struct order),4,fp);
    fread(&od,sizeof(struct order),4,fp);
    printf("details of the food items \n");
    for(i=0;i<4;i++)
    {
        printf("\nfood name: %s",od[i].foodname);
         printf("\tprice =%0.1f",od[i].price);
         printf("\tquantity =%d",od[i].qnt);
    }
    printf("\nare u looking for somthing else \n");
}
    if(opt==2)
    {
        fread(&od,sizeof(struct order),4,fp);
    printf("enter the time upto which orderd would deliver \n");
    scanf("%d%d%d",&hr,&min,&sec);
   /* if(hr>12||min>60||sec>60)
    {
        printf("ERROR ENTER WITH TIME \n";)
    }
    while(1)
    {
      sec++;
      if(sec>59)
      {
        min++;
        s=0;
      }
      if(min>59)
      {
        hr++;
        min=0;
      }  
    }*/
        printf("what u like to order\n");
        scanf("%d",&cho);
        switch(cho)
        {
            case 1:
            printf("here is your foodname:");
            //fread(&od,sizeof(struct order),1,fp);
            printf("%s\n",od[cho].foodname);
            printf("its price is =");
             // fread(&od,sizeof(struct order),1,fp);
             printf("%0.1f\n",od[cho].price);
            printf("its no of quantity is =");
            //fread(&od,sizeof(struct order),1,fp);
            printf("%d\n:",od[cho].qnt);
            printf("ordered sucesfully \n");
          //  delivertime(hr,min,sec);
            printf("set time :");
               if(hr>12||min>60||sec>60)
    {
        printf("ERROR ENTER WITH TIME \n");
    }
    while(1)
    {
      sec++;
      if(sec>59)
      {
        min++;
        sec=0;
      }
      if(min>59)
      {
        hr++;
        min=0;
      }}
              printf("clock:");
              printf("%d:%d:%d",hr,min,sec);
            break;
            case 2:
            printf("here is your foodname:");
            //fread(&od,sizeof(struct order),1,fp);
            printf("%s\n",od[cho].foodname);
            printf("its price is =");
             // fread(&od,sizeof(struct order),1,fp);
             printf("%0.1f\n",od[cho].price);
            printf("its no of quantity is =");
            //fread(&od,sizeof(struct order),1,fp);
            printf("%d\n:",od[cho].qnt);
            printf("ordered sucesfully \n");
            // delivertime(hr,min,sec);
            printf("set time :");
              printf("clock:");
              printf("%d:%d:%d",hr,min,sec);
            break;
              case 3:
            printf("here is your foodname:");
            //fread(&od,sizeof(struct order),1,fp);
            printf("%s\n",od[cho].foodname);
            printf("its price is =");
             // fread(&od,sizeof(struct order),1,fp);
             printf("%0.1f\n",od[cho].price);
            printf("its no of quantity is =");
            //fread(&od,sizeof(struct order),1,fp);
            printf("%d\n:",od[cho].qnt);
            printf("ordered sucesfully \n");
          //   delivertime(hr,min,sec);
            printf("set time :");
              printf("clock:");
              printf("%d:%d:%d",hr,min,sec);
            break;
             case 4:
            printf("here is your foodname:");
            //fread(&od,sizeof(struct order),1,fp);
            printf("%s\n",od[cho].foodname);
            printf("its price is =");
             // fread(&od,sizeof(struct order),1,fp);
             printf("%0.1f\n",od[cho].price);
            printf("its no of quantity is =");
            //fread(&od,sizeof(struct order),1,fp);
            printf("%d\n:",od[cho].qnt);
            printf("ordered sucesfully \n");
             //delivertime(hr,min,sec);
            printf("set time :");
              printf("clock:");
              printf("%d:%d:%d",hr,min,sec);
           // printf("your order will be delivered within 40 min\n");
            break;
            default:
            printf("SORRY YOUR SELECTED ITEM IS NOT PRESENT IN OUR RESTRAUANT \n");
 }
     }
    printf("DO YOU WANT TO CONTINUE ENTER 'Y' FOR YES AND 'N' FOR NO ");
    fflush(stdin);
     scanf("%c",&ch);

}
}

