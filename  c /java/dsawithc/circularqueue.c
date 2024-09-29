#include<stdio.h>
#define MAX 10
void enqueue(int);
void dequeue();
void display();
int queue[MAX];int front,rear;
int main()
{
    rear=-1;
    front=-1;
    enqueue(12);
    enqueue(13);
    enqueue(14);
    dequeue();
    display();
    
}
void enqueue(int n){
    if((rear+1)%MAX==front){
        printf("overflow");
    }
    if(front==-1){
        front++;
        rear++;
        queue[rear]=n;
    }
    else{
        rear++;
        queue[rear]=n;
    }
}
void dequeue()
{
    if(rear==-1&&front==-1)
    {
        printf("underflow");
    
    
    }
    else
    {
     if(rear==front)
     {
        printf("%d",queue[front]);
        rear=-1;
        front=-1;
     }
     else
     {
        printf("%d",queue[front]);
        front=(front+1)%MAX;
     }
    }
}

void display() {
    printf("\ndisplaying queue elements:\n");
    int i = front;
    while (i != rear) {
        printf("%d\n", queue[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n",queue[front]);
}
