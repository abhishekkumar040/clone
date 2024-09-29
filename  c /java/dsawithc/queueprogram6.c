#include<stdio.h>
#define MAX 10
int enqueue();
int dequeue();
void display();
int queue[MAX];
int rear=-1,front=0;
int main()
{
    int choice;
    do
    {
       printf("queue");
       printf("\n1.enqueue\n2.dequeue\n3.display");
       printf("\nenter your choice");
       switch (choice)
       {
       case 1: enqueue;break;
       case 2: dequeue;break;
       case 3: display;break;
       default:printf("invilid choioce");break;
       }
    } while (choice<4);
    return 0;
}
int enqueue()
{
    int n;
    if(front==(rear+1)%MAX){
        printf("overflow");
    }
    else
    {
        if(n-1<n,n++)
        printf("enter an element for enqueue");
        scanf("%d",&n);
        rear++;
        queue[rear]=n;
    }
}
int dequeue()
{
    int n;
    printf("enter element for dequeue");
    sscanf("%d",&n);
    if(rear==-1&&front==-1){
        printf("underflow");
    }
    else{
        printf("%d",queue[front]);
        front++;
        if(front>rear){
            front=-1;
            rear=-1;
        }
    }
}
void display(){
    printf("\ndisplaying queue elements :");
    for(int i=front;i<=rear;i++){
        printf("%d\n",queue[i]);
    }
}