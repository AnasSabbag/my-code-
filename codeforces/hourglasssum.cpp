// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i,j;
//     vector<vector<int>>arr(6,vector<int>(6,0));
//     for(i=0;i<6;i++)
//     {
//         for(j=0;j<6;j++)
//         cin>>arr[i][j];
//     }

//     vector<int>sum(16,0);int k=0;
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             sum[k]=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1];
//             sum[k]+=arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];k++;
//         }
//     }

//     cout<<*max_element(sum.begin(),sum.end());
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;



// #include<stdio.h>
// #include<stdlib.h>
// typedef struct node
// {
//     int info;
//     struct node *next;
// }node;
// void list(node **head,int val)
// {
//     node *ptr,*p;
//     p=(node*)malloc(sizeof(node));
//     p->info=val;
//     p->next=NULL;
//     if(*head==NULL)
//     {
//         *head=p;
//     }
//     else {
//         ptr=*head;
//         while(ptr->next)
//         {
//         ptr=ptr->next;
//         }
//         ptr->next=p;
//     }
// }
// void display_list(node *head)
// {
//     printf("\nthe element in the list is ");
//     node *ptr=head;
//     while(ptr){
//     // cout<<ptr->info<<" ";
//     printf("%d ",ptr->info);
//     ptr=ptr->next;    
//     }
// }

// int main()
// {
//     node *head1=NULL,*head2=NULL;
//     int i,n,val;
//     n=5;
//      for(i=0;i<n;i++)
//     {
//         //cin>>val;
//         val=i;
//         list(&head1,val);
//     }
//     for(i=0;i<n;i++)
//     {
//         val=i+5;
//         list(&head2,val);
//     }
//     display_list(head1);
//     display_list(head2);
    
//     return 0;
// }

//Binary search tree 



#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int info;
    struct node *left;
    struct nodde *right;
}tree;
void insertion_int_bst(tree **root,int val)
{
    tree *ptr,*q,*p;
    ptr=(tree*)malloc(sizeof(tree));
    ptr->info=val;
    ptr->left=NULL;
    ptr->right=NULL;
    if(*root==NULL)
    {
        *root=ptr;
    }
    else
    {
        q=*root;
        p=q;
        while(!q && q->info !=NULL)
        {
            p=q;
            if(val > q->info)
            {
                q=q->right;
            }
            else
            {
                q=q->left;
            }
        }

        
    }

}
int main()
{
    tree *root=NULL;
    int i,n,val;
    printf("\n Eneter totaln number of node in a bst ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter value ");
        scanf("%d",&val);
        insertion_int_bst(&root,val);
    }

    return 0;
}










