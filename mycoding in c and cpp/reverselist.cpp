#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
}node;
void insert_node(node **H,int value)
{
    node *ptr,*q,*p;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=value;
    ptr->next=NULL;
    if(*H==NULL)
    {
        *H=ptr;
    }
    else
    {
        p = *H;
        while(p!=NULL)
        {
            q=p;
            p=p->next;
        }
        q->next=ptr;
        ptr->next=NULL;

    }

}
void display_list(node *H)
{
    node *ptr;
    ptr=H;
    do
    {
        printf(" %d --> ",ptr->info);
        ptr=ptr->next;

    }while(ptr!=NULL);

}
void reverse_list(node **H)
{
    node *ptr,*q=NULL;
    ptr=*H;
    while(*H!=NULL)
    {
        *H=ptr->next;
        ptr->next=q;
        q=ptr;
        ptr=*H;
    }
    *H=q;
}


int main()
{
    node *head;
    int i,val,n;
    printf("\n ENter the number of value for linked list : ");
    scanf("%d",&n);
    head=NULL;
    for(i=0;i<n;i++)
    {
        //printf("\n Enter the value of node : ");
        //scanf("%d",&val);
        insert_node(&head,i+1);
    }
    display_list(head);
    reverse_list(&head);
    printf("\n ");
    display_list(head);
    return 0;
}
