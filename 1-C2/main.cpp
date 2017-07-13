#include<stdio.h>
#include<stdlib.h>
typedef struct Link
{
    int x;
    struct Link*last
    struct Link*next;
}link;
int main()
{
    link*head=NULL;
    head=(link*)malloc(sizeof(link));
    head->last=NULL;
    head->next=NULL;
    link*p=NULL;
    p=head;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        p->next=malloc(sizeof(link));

    }
}
