#include<stdio.h>
#define MAX 10
int enqueue(int);
int dequeue();
void display();
int queue[MAX];int front,rear;
int main()
{
    rear=-1;
    front=-1;
    enqueue(12);
    enqueue(13);
    enqueue(14);
    enqueue(15);
    enqueue(16);
    dequeue();
    display();
    
}
int enqueue(int n){
    if(rear>=MAX-1){
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
int dequeue(){
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