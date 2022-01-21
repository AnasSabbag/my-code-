#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
    int info;
    struct list *next;
}node;

void insert_at_last(node **H,int val)
{
    node *ptr,*loc;
    ptr=(node*)malloc(sizeof(node));
    if(ptr==NULL)
    {
        printf("overflow condition take exit");
        return ;
    }
    ptr->info=val;
    ptr->next=NULL;
    if(*H==NULL)
    {
        *H=ptr;
    }
    else
    {
        loc=*H;
        while(loc->next!=NULL)
        {
            loc=loc->next;
        }
        loc->next=ptr;
    }


}
    void reverse_list(node **H)
    {
        node *p,*q;

        q=NULL;
        while(*H!=NULL)
        {
            p=*H;
            (*H)=(*H)->next;
            p->next=q;
            q=p;
        }

    }



void display(node **H)
    {
        node *ptr;
        ptr=*H;
        while(ptr!=NULL)
        {
            printf(" %d  ",ptr->info);
            ptr=ptr->next;
        }

    }


    int main()
    {
        node *HEAD;
        HEAD=NULL;
        int n,i,va;
        printf("\n enter the total number of node");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            //printf("\n enter the value : ");
            //scanf("%d",&va);
            va=i+1;
            insert_at_last(&HEAD,va);
        }
        printf("\n list before reversing : ");
        display(&HEAD);
        reverse_list(&HEAD);
        printf("\n list after reversing : ");
        display(&HEAD);
        return 0;
    }

