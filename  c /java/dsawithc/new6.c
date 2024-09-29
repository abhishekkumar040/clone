#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int cqueue[MAX];
int rear = -1, front = -1;

void enqueue();
void dequeue();
void display();
int main() {
    printf("Abhishek kumar (1AY23CS005) Program!\n");
    int choice,input=1;
    
    while(input==1) {
        printf("\n------------------ Queue -------------------");
        printf("\n 1. enqueue\n 2. dequeue\n 3. Display\n 4. Exit\n");
        printf("\n---------------------------------------------\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
                break;
        }
        printf("enter 1 if you want to continue!!\n");
        scanf("%d",&input);
    } 
    
    return 0;
}
void enqueue()
{
    int n;
    if((MAX+1)%MAX==front)
    printf("queue is overflow\n");
    else
    {
        printf("enter an element for enqueue\n");
        scanf("%d",&n);
        if(rear==-1&&front==-1)
            {
              rear=0;
              front=0;
            }
            else
            {
              rear=(rear+1)%MAX;
               
            }
            cqueue[rear]=n;
        }
    }

    void dequeue()
{
    
    if(rear==-1&&front==-1)
    printf("queue is empty\n");
    else
    {
     // n=cqueue[front];
      printf("deleted element %d",cqueue[front]);
      if(front==rear)
      {
        front=-1;
        rear=-1;
      }
      else
      {
        front=(front+1)%MAX;
      }
      //printf("deleted element %d",n);
    }
}
void display()
{
    int i;
    if(rear==-1&&front==-1)
    printf("queue is empty\n");
    else
    {
        printf("element of queue:\n");
        for(i=front;i!=rear;(i=(i+1)%MAX))
        {
            printf("%d\n",cqueue[i]);
        }
        printf("%d\n",cqueue[i]);
    }
}