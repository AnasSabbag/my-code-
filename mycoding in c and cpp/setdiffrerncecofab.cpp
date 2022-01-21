#include<stdio.h>
int main()
{
    int a[10],b[10],n,k,sm[20],c,i,j;
    printf("\n\n NAME IS Anas Sabbag \n\n rollno  1901430120006 \n ");
    printf("\n\n Btech 2nd year CSE section 1st ");
    printf("\n ***  DIFFRENCE OF SET  A-B ***** \n    ");
    printf("\n enter the number of element of set A : \n ");
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
        c=0;
        for(j=0;j<k;j++)
        {
            if(a[i]==b[j])
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            sm[d]=a[i];
            d++;
        }
    }




    printf("the element of set A - B are : ");
    for(i=0;i<d;i++)
      printf("%d ",sm[i]);

return 0;
}
