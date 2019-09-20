#include<stdio.h>
#include<stdlib.h>
struct table
{
    int data;
    struct table* next;
};
int main()
{
    int n=0,i=0;
    struct table *L;
    struct table *t;
    L=(struct table*)malloc(sizeof(struct table));
    L->next=NULL;
    t=(struct table*)malloc(sizeof(struct table));
    scanf("%d",&t->data);
    while(t->data!=-1)
    {
        if((t->data%2)!=0)
        {
            n++;
        }
        scanf("%d",&t->data);
    };
   t=L->next;
   while(t!=NULL)
    {
        t=t->next;
        printf("%d",t->data);
    };
    return 0;
}
