#include<stdio.h>
int main(){
    int buffer[10],bufsize,in,out,produce,consume,choice=0;
    in=0;
    out=0;
    bufsize=10;
    while (choice!=3)
    {
       printf("\n1. produce \n2.consume \n3. exit");
       printf("\nenter your choice:\n");
       scanf("%d",&choice);
       switch (choice)
       {
       case 1: if ((in+1)%bufsize==out)
       printf("\nbuffer is full");
       else
       {
        printf("\nenter the value: ");
        scanf("%d",&produce);
        buffer[in]=produce;
        in=(in+1)%bufsize;
       }
        break;
        case 2: if(in==out)
        printf("\nbuffer is empty\n");
        else
        {
            consume=buffer[out];
            printf("\nconsumed value is %d",consume);
            out=(out+1)%bufsize;
        }
        break;
       }
    }
    return 0;

}