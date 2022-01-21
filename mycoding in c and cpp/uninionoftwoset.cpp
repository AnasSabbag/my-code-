#include<stdio.h>
int main()
{
    int a[10],b[10],n,k,un[20],c,i,j;

        printf("\n NAME IS Anas Sabbag \n rollno  1901430120006  ");
        printf("\n Btech 2nd year CSE section 1st ");
    printf("\n *** UNION OF TWO  SET ***** \n    ");

    printf("enter the number of element of set A : \n ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("enter element of set A : ");
    scanf("%d",&a[i]);
    }
    printf("enter the number of element of set B : \n ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
    printf("enter element of set B : ");
    scanf("%d",&b[i]);
    }

    printf("\n the element of set A :  {  ");
    for(i=0;i<n;i++)
    printf("%d  ,",a[i]);
    printf(" } \n");


    printf("\n the element of set B :  {  ");
    for(i=0;i<k;i++)
    printf("%d  ,",b[i]);
    printf("  } \n ");

    int d=0;
    for(i=0;i<n;i++)
    {
       un[d]=a[i];
        d++;
    }

    for(i=0;i<k;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(b[i]==un[j])
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            un[d]=b[i];
            d++;
        }
    }

    printf("the element of set A union B are : ");
    for(i=0;i<d;i++)
      printf("%d ",un[i]);

return 0;
}
