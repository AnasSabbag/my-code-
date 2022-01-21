#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct queu
{
    int info;
    struct queu* next;
}node;
node *frot=NULL,*rear=NULL;

void ENQUEUE(int val)
{
   node *ptr,*temp;
   ptr=(node*)malloc(sizeof(node));
   if(ptr==NULL)
   {
       printf("\n Queue is overflow !! ");
       return;

   }
   ptr->info = val;
   ptr->next = NULL;
   if(rear==NULL)
   {
       temp=ptr;
        rear=ptr;
        frot=ptr;
   }
    else{
        temp=frot;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        rear=ptr;
    }


}
int DEQUEUE()
{
    int y;
    if(frot==NULL)
    {
        printf("\n Queue is underflow !!! ");
        return -1;
    }
    else
    {
        y=frot->info;
        frot=frot->next;
        return y;
    }


}
void DISPLAY_QUEUE()
{
    node *ptr;
    ptr=frot;
    if(ptr==NULL)
    {
        printf("\n Queue is empty !! ");
        return;
    }
    do
    {
        printf("  %d  ",ptr->info);
        ptr=ptr->next;
    }while(ptr!=rear);

}


int main()
{
    int ch,val,var;
     while(1)
    {
        printf("\n enter the choice : ");
        printf("\n 1->ENQUEUE \n 2->DEQUEUE \n 3->DISPLAY QUEUE \n 4-> EXIT \n ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\n enter the value: ");
            scanf("%d",&val);
            ENQUEUE(val);
            break;
        case 2:
            var = DEQUEUE();
            if(var!=-1)
                printf("\n %d value is deleted from queue ",var);
                break;
        case 3: DISPLAY_QUEUE();
                break;
        case 4:
                exit(1);

        }
    }
    return 0;
}
