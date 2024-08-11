#include<stdio.h>
char arr[]={'0','1','2','3','4','5','6','7','8','9'};
void printBoard(){
    printf("******* TIC TACK TOE ********** \n\n");
    printf("   %c |  %c  |  %c  \n",arr[1],arr[2],arr[3]);
    printf("-----|-----|----- \n");
    printf("   %c |  %c  |  %c  \n",arr[4],arr[5],arr[6]);
    printf("-----|-----|----- \n");
    printf("   %c |  %c  |  %c  \n",arr[7],arr[8],arr[9]);
    printf("-----|-----|----- \n");
    }
int main()
{
    char arr[]={'0','1','2','3','4','5','6','7','8','9'};
     printBoard(arr);
    
    int player=1,input;
    char mark=(player==1)?'x':'0';
    printf("Enter the block where u want to put mark :\n");
    scanf("%d",&input);
    if(input<1 || input>9)
    printf("Invalid position selected :\n");
else
arr[input]=mark;
 printBoard();
    
    return 0;
}