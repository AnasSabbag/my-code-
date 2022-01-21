#include<stdio.h>
#include<stdlib.h>
#define max 10
int top=-1;
int a[max];
void push(int a[],int val)
{
    if(top==max-1)
    {
        printf("\n stack is full take exit ");
        return ;
    }

    a[++top]=val;
}

int pop(int a[])
{
    int y;
    if(top==-1)
    {
        printf("\n stack is in underflow condition \n Take exit ");
        return -1;
    }
    y=a[top--];
    return y;
}




void Display_stack(int a[])
{
    int i;
    if(top==-1)
    {
        printf("\n stack is empty ");
        return;
    }
    printf("\n the element in the stack \n ");
    for(i=top;i>=0;i--)
        printf("\n %d ",a[i]);
}
int main()
{
   int ch,del;
   int val;
   while(1)
    {
        printf("\n Enter your choice :  ");
        printf("\n 1->push \n 2->pop \n 3-> Display stack \n 4->take exit: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\n enter the value which you want to insert in stack :");
            scanf("%d",&val);
            push(a,val);
            break;
        case 2:
             del=pop(a);
             if(del!=-1)
                printf("\n pop element is %d form stack ",del);
                break;
        case 3:
                Display_stack(a);
                break;
        case 4: printf("\n END ");
            exit(1);
        }
    }
    return 0;
}
