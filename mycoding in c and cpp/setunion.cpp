#include<stdio.h>
int main()
{
    int a[5],b[5],n,un[10],c,i,j;
    for(i=0;i<5;i++)
    {
    printf("enter element of set A : ");
    scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {
    printf("enter element of set B : ");
    scanf("%d",&b[i]);
    }

    printf("\n the element of set A :  {  ");
    for(i=0;i<5;i++)
    printf("%d  ,",a[i]);
    printf(" } \n");


    printf("\n the element of set B :  {  ");
    for(i=0;i<5;i++)
    printf("%d  ,",b[i]);
    printf("  } \n ");

    int d=0;
    for(i=0;i<5;i++)
    {
       un[d]=a[i];
        d++;
    }

    for(i=0;i<5;i++)
    {
        c=0;
        for(j=0;j<5;j++)
        {
            if(b[i]==un[j])
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            un[d]=b[i];
            d++;
        }
    }



    printf("the element of of A union B are : ");
    for(i=0;i<d;i++)
      printf("%d ",un[i]);

return 0;
}
