#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
typedef struct hostel
{
  char name[15];
  int rno;
  char loc[15];
  char gen[7];
}hostel;
void create(int n,int start,int end)
{
   // int i;
   hostel h;
  // int rmno;
 // int rndm=((rand()%(end-start+1))+start);
 // printf("%d",rndm);
  printf("enter name of student \n");
  scanf("%s",h.name);
  printf("enter gender of student \n");
  scanf("%s",h.gen);
  printf("enter location of student \n");
  scanf("%s",h.loc);
 // printf("enter room no of student \n");
h.rno=((rand()%(end-start+1))+start);
 FILE *fp=fopen("hostelalloc.txt","wb+");
fwrite(&h,sizeof(hostel),1,fp);
//fprintf(&h,sizeof(hostel),1,fp);
//fprintf(fp,"%s",hostel)
 fclose(fp);
  
  
  return;
}
/*int getroomno(int)
{
   int rndm=((rand()%(end-start+1))+start);  
}*/
void display()
{
  char st[10];
    hostel h1;
  FILE *fp=fopen("hostelalloc.txt","rb"); 
 fread(&h1,sizeof(hostel),1,fp);
  if(fp!=NULL)
  {
//fgetc(ch,fp);
while(!feof(fp)){
    
fscanf(fp,"%s",st);
//if(ch!EOF)
//  while(fp!=NULL)
//  {
  printf("%s ",h1.name);
     printf("%s ",h1.gen);
    printf("%s ",h1.loc);
     printf("%d ",h1.rno);
  }}
  fclose(fp);
  return;
}

int main()
{
    int op,n,start,end;
     printf("enter how many rooms u have :\n");
    scanf("%d",&n);
    printf("enter the start and end of room no \n");
    scanf("%d%d",&start,&end);
    do
   { 
printf("\nEnter 1 for create student record :");
printf("\n Enter 2 to display student details :");
printf("\n Enter 0 to exit :\n");
scanf("%d",&op);
switch(op)
{
    case 1:
    create(n,start,end);
    break;
    case 2:
    display();
    break;
    default:
    printf("wrong choice \n");
}
}while(op!=0);
printf("thanks \n");
return 0;
}