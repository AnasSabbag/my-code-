#include<stdio.h>
#include<stdlib.h>
typedef struct queu
{
    int info;
    int *front=NULL;
    int *rear=NULL;
    struct queu* next;
}node;

push(node **)
{

}
pop()
{

}
int main()
{
    node *Q;
    Q=NULL;
    int ch,i;
    while(1)
    {
        printf("\n 1 push   2. pop  3.  display  4. exit ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("\n Enter the value ");
                    scanf("%d",&i);
                    push(&Q,i);
                    break;
            case 2:
                        int val=pop(&Q);
                        if(val!=-1)
                            printf("\n %d element is pop from queue",val);
                        break;
            case 3:
                        display(Q);
                        break;
            case 4:
                        exit(1);

        }

    }
    return 0;
}
