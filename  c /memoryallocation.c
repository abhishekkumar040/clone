#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int num,i;
    printf("enter the number of element");
    scanf("%d",&num);
    ptr=(int*)malloc(num*sizeof(int));
    if(ptr == NULL)
    {
        printf("memory not allocated");
    } 
    else
    {
        printf("memory allocated");
    }
    for(i=0;i<num;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<num;i++)
    {printf("%d element is %d",i+1,ptr[i]);
    }
    free(ptr);
    return 0;
}
