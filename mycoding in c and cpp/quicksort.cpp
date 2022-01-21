#include<stdio.h>
int partician(int a[],int lb,int ub)
{
    int d,up,p;
    int t;
    d=lb;
    up=ub+1;
    p=a[lb];
    while(d<=up)
    {
        do
        {
            d+=1;
        }while(p>a[d]);
        do{
            up--;
        }while(p<a[up]);
        if(d<up)
        {
            t=a[up];
            a[up]=a[d];
            a[d]=t;
        }
    }

            t=a[up];
            a[up]=a[lb];
            a[lb]=t;
            return up;
}


        int quick_sort(int a[],int lb,int ub)
        {
            int u;
            if(lb<ub)
            {
                u=partician(a,lb,ub);
                quick_sort(a,lb,u-1);
                quick_sort(a,u+1,ub);
            }

        }


        int main()
        {
            int a[10],i,lb=0,ub,n=7;

            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
            ub=n-1;
            quick_sort(a,lb,ub);

            for(i=0;i<n;i++)
                printf(" %d  ",a[i]);
            return 0;
        }
