#include<stdio.h>
#include<string.h>

char stack[20];
int top = -1;
int MAXSIZE = 20;

void push() {
    int value;
    if (top == MAXSIZE - 1) {
        printf("Stack overflow!\n");
    } else {
        printf("Enter the value to push: ");
        scanf("%d", &value);
        stack[++top] = value;
        printf("%d pushed to stack.\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack underflow!\n");
    } else {
        printf("%d popped from stack.\n", stack[top--]);
    }
}
int palindrome() {
    char str[50];
    printf("Enter a word to check: ");
    scanf("%s", str);
    
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
        if (str[i] != str[len - i - 1]) {
            printf("Not a palindrome!\n");
            return 0;
        }
    
    printf("It is a palindrome!\n");
    return 0;
}


void display() 
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
    } else 
    {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) 
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    printf("Abhishek kumar program (1AY23CS005)!\n\n");
    int choice;
    while (1) {
        printf("\n1.Push\n2.Pop\n3.Display status\n4.Check palindrome\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: 
                push();
                break;
            case 2: 
                pop();
                break;
            case 3: 
                display();
                break;
            case 4: 
                palindrome();
                break;
            case 5: 
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}