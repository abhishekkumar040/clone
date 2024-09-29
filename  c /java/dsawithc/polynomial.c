#include <stdio.h>
#include <stdlib.h>

struct poly {
    int n;
    struct term *t;
};
struct term
{
    int cof;
    int exp;
};
int main ()
{
    int i,cof;
struct poly p;
printf("enter the term");
scanf("%d",&p.n);
p.t=(struct term *)malloc(p.n * sizeof(struct term));
for(i=0;i<p.n;i++)
{
scanf("%d%d",&p.t[i].cof,&p.t[i].exp);
}
for ( i = 0; i < p.n; i++)
{
   printf("%dx^%d",p.t[i].cof,p.t[i].exp);
}

}