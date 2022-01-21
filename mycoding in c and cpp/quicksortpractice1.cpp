#include<stdio.h>
int partician(int a[],int lb,int ub)
{
    int up,p,d,t;
    p=a[lb];
    d=lb;
    up=ub+1;
    while(d<=up)
    {
        do{
            d=d+1;
        }while(a[d]<p);

        do{
            up=up-1;
        }while(a[up]>p);

        if(d<up)
        {
         t=a[d];
         a[d]=a[up];
         a[up]=t;
        }
    }
    t=a[lb];
    a[lb]=a[up];
    a[up]=t;
    return up;
}

void quick_sort(int a[],int lb,int ub)
{
    int u;
    if(lb<ub)
    {
        u=partician(a,lb,ub);
        quick_sort(a,lb,u-1);
        quick_sort(a,u+1,ub);
    }

}
void display_array_sort(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf(" %d  ",a[i]);
}


int main()
{
    int a[7]={33,44,35,26,34,65,28};
    int i,n=7;
    quick_sort(a,0,n-1);
    display_array_sort(a,n);
    return 0;
}





//33 44 35 26 34 65 28
//33 28 35 26 34 65 44
//33 28 26 35 34 65 44
//26 28 33 35 34 65 44
//26 28 33 34 35 65 44


