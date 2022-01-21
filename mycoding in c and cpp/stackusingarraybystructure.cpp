#include<stdio.h>
#include<stdlib.h>
#define max 6
struct stack
{
    int top=-1;
    int arr[max];
};
void PUSH(int val)
{
    if(stack->top==max-1)
    {
        printf("\n stack is overflow !!! ");
        return ;
    }
    else{
        stack->top++;
        stack->arr[stack->top]=val;
    }
}
int POP()
{
    int y;
    if(stack->top==-1)
    {
        printf("\n Stack is underflow ~~~~");
        return -1;
    }
    else
    {
        y=stack->arr[stack->top];
        stack->top--;
        return y;
    }


}
void DISPLAY()
{
    int i;
    if(stack->top==-1)
    {
        printf("\n stack is empty !!");
        return ;
    }
    else{
        for( i = 0 ; i < = stack->top ; i++ )
        printf("   %d  ",stack->arr[i]);
    }
}


int main()
{
    int i,ch;
    while(1)
    {
        printf("\n Enter the choice : ");
        printf("\n 1-> Push  2-> Pop  3-> Display 4->Exit ");
        scanf("%d",&ch);
        switch(ch)
            {
        case 1:
            printf("\n Enter the value ");
            scanf("%d",&i);
            PUSH(i);
            break;
        case 2:
            POP();
            break;
        case 3:
            DISPLAY();
            break;
        case 4:
            exit(0);
        }
    }


}
