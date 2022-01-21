#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct stk
{
    int info;
    struct stk* next;
}node;
void push_at_beg(node **H,int val)
{
    node *p;
    p=(node*)malloc(sizeof(node));
    p->info=val;
    p->next=NULL;
    if(*H==NULL)
    {
        *H = p;
        p->next=NULL;
    }
    else
    {
        p->next=*H;
        *H=p;
    }
}
int pop_at_beg(node **H)
{
    node *p,*T;
    int y;
    p=*H;
    T=p;
    if(p==NULL)
    {
        printf("\n stack is empty take exit  ");
        return -1;
    }
    y=T->info;
    p=p->next;
    *H=p;
    free(T);
   return y;
}
void Display_node(node *H)
{
    node *p;
    p=H;
    if(p==NULL)
    {
        printf("\n stack is empty !!! ");
        return;
    }
    while(p!=NULL)
    {
        printf(" %d ",p->info);
        p=p->next;
    }
}


int main()
{
    node *Head;
    Head=NULL;
    int ch,val,var;
     while(1)
    {
        printf("\n enter the choice : ");
        printf("\n 1->push in stack \n 2-> pop from stack \n 3->display stack \n 4-> exit ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\n enter the value: ");
            scanf("%d",&val);
            push_at_beg(&Head,val);
            break;
        case 2:
            var = pop_at_beg(&Head);
            if(var!=-1)
                printf("\n %d value is pop from stack ",var);
                break;
        case 3: Display_node(Head);
                break;
        case 4:
                exit(1);

        }
    }
    return 0;
}
