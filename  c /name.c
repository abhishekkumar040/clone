#include<stdio.h>
int main(){
    int i;
    char a[1000];
    printf ("inter your name");
    scanf("%s",a);
    for(i=1;i<=1000;i++)
    {
        printf("%s\t",a);
    }
    return 0;
}