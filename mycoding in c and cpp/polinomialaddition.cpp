#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
    int coef;
    int exp;
    struct list* next;
}node;

void expression(node **head,int C,int E)
{
    node *ptr,*q;
    ptr=(node*)malloc(sizeof(node));
    ptr->coef=C;
    ptr->exp=E;
    ptr->next=NULL;
    if(*head==NULL)
    {
        *head=ptr;
    }
    else
    {
        q = *head;
         while(q->next!=NULL)
            q=q->next;
        q->next=ptr;
    }

}
void attach(int COF,int Exp,node **D)
{
    node *ptr,*q;
    ptr=(node*)malloc(sizeof(node));
    ptr->coef=COF;
    ptr->exp=Exp;
    ptr->next=NULL;
    if(*D==NULL)
    {
        *D=ptr;
    }
    else
    {
        q = *D;
         while(q->next!=NULL)
            q=q->next;
        q->next=ptr;
    }
}
void displayexpression(node *head)
{
    node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->coef>=0)
        printf("+ %d X^(%d) ",ptr->coef,ptr->exp);
        else
        printf(" %d X^(%d) ",ptr->coef,ptr->exp);
        ptr=ptr->next;
    }
}
node* polinomial_addition(node *P,node *Q)
{
    node *A,*B,*D;
    A=P;B=Q;
    D=NULL;
    int COF;
    while(A!=NULL&&B!=NULL)
    {
        if(A->exp==B->exp)
        {
            COF=A->coef + B->coef;
           attach(COF,A->exp,&D);
           A=A->next;
           B=B->next;
        }
        else if(A->exp > B->exp)
        {
            attach(A->coef,A->exp,&D);
            A=A->next;
        }
        else
        {
            attach(B->coef,B->exp,&D);
            B=B->next;
        }

    }

    while(A!=NULL)
    {
       attach(A->coef,A->exp,&D);
       A=A->next;
    }

    while(B!=NULL)
    {
       attach(B->coef,B->exp,&D);
       B=B->next;
    }
    return D;
}

int main()
{
    node *head1,*head2,*head3;
    head1=NULL;
    head2=NULL;
    expression(&head1,3,14);
    expression(&head1,2,8);
    expression(&head1,4,7);
    expression(&head1,-3,6);
    printf("\n the first expression is : ");
    displayexpression(head1);
    expression(&head2,8,14);
    expression(&head2,-3,10);
    expression(&head2,-2,8);
    expression(&head2,11,6);
    expression(&head2,5,4);
    expression(&head2,9,0);
    printf("\n second expression is : ");
    displayexpression(head2);
    head3=polinomial_addition(head1,head2);
    printf("\n the sum of two exp \n ");
    displayexpression(head3);
    return 0;
}
