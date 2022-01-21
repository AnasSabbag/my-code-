#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;

void create();
void display();
void count();

void insert_begin();
void insert_last();
void insert_specific();

void delete_first();
void delete_last();
void delete_specific();

void reverse();

void main()
{
    int ch;
    char choice;
    while (1)
    {

        printf("1. Create\n");
        printf("2. Display\n");
        printf("3. Insert at Begin\n");
        printf("4. Insert at Last\n");
        printf("5. Insert at Location\n");
        printf("6. Delete at First\n");
        printf("7. Delete at Last\n");
        printf("8. Delete at Location\n");
        printf("9. Reverse\n");
        printf("10. Count\n");
        printf("11. Exit\n");

        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert_begin();
            break;
        case 4:
            insert_last();
            break;
        case 5:
            insert_specific();
            break;
        case 6:
            delete_first();
            break;
        case 7:
            delete_last();
            break;
        case 8:
            delete_specific();
            break;
        case 10:
            count();
            break;
        case 11:
            exit(1);
            break;
        default:
            printf("Invalid Input");
        }
    }
}

void create()
{
    char ch='y';
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    printf("enter the node data");
    scanf("%d",&temp->data);
    temp->next=temp;
    start=temp;
    do{
        struct node temp1=(struct node *)malloc(sizeof(struct node));
        printf("enter node data");
        scanf("%d", &temp1->data);
        temp->next=temp1;
        temp=temp1;
        printf("enter y for more node: ");
        scanf("%c",&ch);
        scanf("%c",&ch);
    }
    while(ch=='y');
    temp->next=start;
}

void insert_begin()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node ));
    struct node *last = start;//(struct node *)malloc(sizeof(struct node *));

    printf("Enter the node data: ");
    scanf("%d", &temp->data);
    temp->next = start;
    if (start == NULL)
    {
        temp->next=temp;
        start=temp;
    }
    else
    {
        while(last->next!=start)
        {
            last=last->next;
        }
        temp->next = start;
        start = temp;
        last->next=temp;
    }
}

void insert_last()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node ));
    struct node *last =  start;//(struct node *)malloc(sizeof(struct node *));
    temp->next = start;
    printf("Enter the node data: ");
    scanf("%d", &temp->data);
    if (start == NULL)
    {
        temp->next=temp;
        start = temp;
    }
    else
    {
        while(last->next!=start)
        {
            last=last->next;
        }
        last->next=temp;
        temp->next=start;
    }
}

void insert_specific()
{
    int x;
    struct node *temp1 = (struct node *)malloc(sizeof(struct node ));
    printf("Enter the data which do you want to insert: ");
    scanf("%d", &temp1->data);
    printf("Enter the node after which do you want to insert: ");
    scanf("%d", &x);
    struct node *loc = start;
    while (temp1->next!=start)
    {
        loc = loc->next;
    }
    temp1->next = loc->next;
    loc->next = temp1;
}

void delete_first()
{
    struct node *last = (struct node *)malloc(sizeof(struct node ));
    struct node *temp = start;
    if (start == NULL)
    {
        printf("Linked list is empty.\n");
    }
    while(last->next!=start)
    {
        last=last->next;
    }
    start = start->next;
    last->next=start;
    free(temp);
}

void delete_last()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node ));
    struct node *last=start;
    if (start == NULL)
    {
        printf("Linked list is empty.\n");
    }
    while (last->next != start)
    {
        temp=last;
        last=last->next;
    }
    temp->next =start;
    free(temp);
}

void delete_specific()
{
    struct node *temp = start;
    struct node *temp1;
    int x;
    printf("Enter the node you want to delete: ");
    scanf("%d", &x);
    while (temp->next != NULL)
    {
        if (temp->next->data == x)
        {
            temp1 = temp->next;
            temp->next = temp1->next;
            free(temp1);
        }
        temp = temp->next;
    }
}



void count()
{
struct node *last = (struct node *)malloc(sizeof(struct node ));
    struct node *temp = start;
    int count = 0;
    if (start == NULL)
    {
        printf("Zero node in the linked list\n");
    }
    else
    {
        while (temp != start)
        {
            count++;
            last = last->next;
        }
    }
    printf("Total nodes in Linked list are: %d \n", count);
}

void display()
{
    struct node *last=start;
    if (start == NULL)
    {
        printf("No nodes to display.\n");
    }
    else
    {
        printf("Linked list is: ");
        while (last->next!=start)
        {
            printf("%d", last->data);
            last=last->next;

        }
        printf("%d",last->data);
    }
    printf("\n");
}

