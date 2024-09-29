#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

int queue[MAXSIZE];
int rare = -1, front = 0;

void insert();
void delete1();
void display();

int main() {
    printf("Abhishek's Program (1AY23CS006)\n\n");
    int choice;
    
    do {
        printf("\n------------------ Queue -------------------");
        printf("\n 1. Insert\n 2. Delete\n 3. Display\n 4. Exit\n");
        printf("---------------------------------------------");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete1();
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
    } while (choice != 4);
    
    return 0;
}

void insert() {
    int n;
    if (rare == MAXSIZE - 1) {
        printf("Queue is full (overflow)!\n");
    } else {
        printf("Enter an element: ");
        scanf("%d", &n);
        queue[++rare] = n;
        printf("%d inserted into the queue.\n", n);
    }
}

void delete1() {
    if (front > rare) {
        printf("Queue is empty (underflow)!\n");
    } else {
        int a = queue[front++];
        printf("Deleted element: %d\n", a);
    }
}

void display() {
    if (front > rare) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements are:\n");
        for (int i = front; i <= rare; i++) {
            printf("%d\n", queue[i]);
        }
    }
}
