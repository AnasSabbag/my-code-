#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 10
int top=-1;

void Display_stack(char a[])
{
    int i;
    if(top==-1)
    {
        printf("\n stack is empty ");
        return;
    }
    printf("\n the element in the stack \n ");
    for(i=top;i>=0;i--)
        printf("\n %c ",a[i]);
}
void push(char a[],char val)
{
    if(top==max-1)
    {
        printf("\n stack is full take exit ");
        return ;
    }
    top=top+1;
    a[top]=val;
    printf("\n  %c element is push and top =%d ",val,top);
}

char pop(char a[])
{
    char y;
    if(top==-1)
    {
        printf("\n stack is in underflow condition \n Take exit ");
        return -1;
    }
    y=a[top];
     top=top-1;
     printf("\n %c element is popped and top=%d ",y,top);

}

void balance_brace(char s[],int n)
{
    int i;
    char a[max],k;
    n=sizeof(s)/sizeof(char);
    for(i=0;i<n;i++)
      {
             if(s[i]=='(')
            {
                k=s[i];
                push(a,k);
            }
            else{
              k = pop(a);
                if(k==-1||(top==-1))
                {
                printf("\n string is unbalance !!! ");
                return ;
                }
            }
      }
        if(top==-1)
        {
            printf("\n stack is balance $$$ top= %d ",top);
        }
Display_stack(a);
}


int main()
{
    int n;
    char s[max];
    printf("\n enter the string : ");
    scanf("%s",s);
    n=strlen(s);
    printf("string is :  %s ",s);
     balance_brace(s,n);
    return 0;
}
