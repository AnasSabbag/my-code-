#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
    int info;
    struct queue* next;
}Queue;
Queue *front=NULL;
Queue *rear=NULL;
void insert_in_Queue(int val)
{
        Queue *q;
        q=(Queue*)malloc(sizeof(Queue));
        q->info=val;
        q->next=NULL;
        if(rear==NULL)
        {
            rear=q;
            front=q;
        }
        else{

            rear->next=q;
            rear=q;
        }
}

void delete_in_Queue()
{
    Queue *p;
    p=front;
    if(p==NULL)
    {
        printf("\n !!! Queue is empty !!! ");
        return ;
    }
    front=front->next;
    free(p);
}
 void display_Queue()
 {
     Queue *p;
     p=front;
     if(p==NULL )
     {
         printf("\n Queue is empty !!!!");
     }
     do
     {
         printf(" %d -> ",p->info);
         p=p->next;
     }while(p!=NULL);

 }
 int main()
 {
     int i,ch,n,val;
     while(1)
     {
        printf("\n Enter the choice ");
        printf("\n  1. inqueue   2. dequeue    3. display     4. exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\n Enter the value ");
                scanf("%d",&val);
                insert_in_Queue(val);
                break;
            case 2:
                delete_in_Queue();
                break;
            case 3:
                display_Queue();
                break;
            case 4:
                exit(0);
        }


     }

 }
