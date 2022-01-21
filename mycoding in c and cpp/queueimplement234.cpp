#include<stdio.h>
#define max 5
typedef struct queu
{
    int front;
    int rear;
    int a[max];
}queue;

void create_iq(queue *q)
{
    q->front=-1;
    q->rear=-1;
}

void add_iq(queue *q,int value)
{
    if(q->rear==max-1)
    {
    printf("queue is overflow ");
    return ;
    }
    if(q->rear==-1)
    {
        q->rear=0;
        q->front=0;
    }
    else
    {
    q->rear=q->rear+1;
    }
    q->a[q->rear]=value;
}

    int delete_iq(queue *q)
    {
        int y;
        if(q->front==-1)
        {
        printf("\n queue is underflow");
        return -1;
        }
        y=q->a[q->front];
        if(q->front==q->rear)
        {
            q->front =-1;
            q->rear  =-1;
        }
        q->front=q->front+1;
        return y;
    }
    void display_iq(queue *q)
    {
        int i;
        printf("\n the element in queue are as follows : \n ");
        for(i=q->front;i<=q->rear;i++)
        printf("%d ",q->a[i]);
    }


    int main()
    {
        queue *q;
        create_iq(q);
        add_iq(q,12);
        add_iq(q,13);
        add_iq(q,14);
        add_iq(q,16);
        display_iq(q);
        printf("\n delete element is :   %d  ",delete_iq(q));
        printf("\n delete element is :   %d  ",delete_iq(q));
        printf("\n delete element is :   %d  ",delete_iq(q));
        printf("\n delete element is :   %d  ",delete_iq(q));
        return 0;
    }
