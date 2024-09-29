#include<stdio.h>
int main (){
    int arr[10][10],row,col,i,j,count;
    printf("enter the number of row and column");
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
         scanf("%d",&arr[i][j]);
    }
   
}
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        if(arr[i][j]==0)
        {
            count=count+1;
        
        }
    }
}
if(count>=(row*col/2))
{
    printf("this is a sparsh matrix");

}
else
   {
     printf("this is not sparsh matrix");
   }
}