#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[20],key,low,high,mid,i;
    printf("enter the size of an array:\n");
    scanf("%d",&n);
    printf("enter the elements to an array:\n");
    for(i=0 ;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key elemen to be search:\n");
    scanf("%d",&key);
    low=0;high=n-1;
    while(low<=high)
    {
        mid=(low +high)/2;
        if(key==a[mid])
        {

        printf("element found at location:%d\n",mid+1);
     exit(0);
    }
    else if (key<a[mid])
    {high=mid+1;}
    else
    {low=mid+1;}
}
printf("key not found \n");
}
