#include<stdio.h>
int main()
{
    int a[]={12,2,4,65,64,56};
    int i,j,n=6,min,loc,t;

    for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
        t=a[i];
        a[i]=a[loc];
        a[loc]=t;

    }

        for(i=0;i<n;i++)
            printf(" %d ",a[i]);
        return 0;

}
