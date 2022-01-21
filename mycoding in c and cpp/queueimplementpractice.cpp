 #include<stdio.h>
 #include<stdlib.h>
 #define max 5
 int a[max],front=-1,rear=-1;
 void ENQUEUE(int val)
 {
     if(rear==max)
     {
         printf("\n Queue is full ");
         return ;
     }
     if(rear==-1)
     {
         rear=0;
         front=0;
     }
     a[rear]=val;
     rear++;
 }
 void DEQUEUE()
 {
     if(front==-1||front>rear)
     {
         printf("\n Queue is underflow ");
         return ;
     }
     if(front==rear)
     {
        front=-1;
        rear=-1;
     }
     else
    front++;
 }
 void DISPLAY()
 {
    int i;
    if(front==-1)
    {
        printf("\n Queue is Empty ");
        return ;
    }
    printf("\n The Element in the Queue : \n");
    for(i=front;i<=rear;i++)
        printf("  %d  ",a[i]);

 }



 int main()
 {
     int ch,val;
     while(1)
     {
         printf("\n Enter the choice : ");
         printf("\n :::: 1->ENQUEUE 2-> DEQUEUE 3-> DISPLAY 4-> EXIT ::::");
         scanf("%d",&ch);
         switch(ch)
         {
         case 1:
                printf("\n Enter the value ");
                scanf("%d",&val);
                ENQUEUE(val);
                break;
         case 2:
                DEQUEUE();
                break;
         case 3:
                DISPLAY();
                break;
         case 4:
                exit(0);
         }
     }
     return 0;
 }
