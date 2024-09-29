#include<stdio.h>
#include<stdlib.h>
int *queue;
int capacity,front,rear;
int main(){
    printf("enter the size of array");
    scanf("%d",&capacity);
    queue=(int*)malloc(capacity*sizeof(int));
    if(queue==NULL)
    {
        printf("memary not allocated");
    } 
    front=-1;
    rear=-1;
}
void enqueue(int n){
    if(front==(rear+1)%capacity)
    {
        printf("queue ois over flow");

    }
    else
    {
        if(rear==-1)
        {
            queue[rear]=n;
        }
        else
        {
         rear=(rear+1)%capacity;
         queue[rear]=n;

        }
    }
}
void dequeue(){
    if(front==-1)
    {
        printf("queue is underflow");
    }
    else
    {
        if(front==rear)
        {
            printf("dequeue:%d",queue[front]);
            front=-1;
            rear=-1;
        }
        else
        { 
            printf("dequeue %d",queue[front]);
            front=(front+1)%capacity;

        }
    }
}