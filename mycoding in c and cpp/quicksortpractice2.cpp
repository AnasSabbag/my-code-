#include<stdio.h>
#include<stdlib.h>
void display_quick_sort(int a[],int n)
{
    int i;
    printf("\n the element in the array : \n ");
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);

}
int quick_partician(int a[],int lb,int ub)
{
    int piv,left,right,temp;
    piv=a[lb];
    left=lb;
    right=ub+1;
    while(left<right)
    {
        do{
            left++;
           }while(piv>a[left]);
        do{
            right--;
        }while(piv<a[right]);

        if(left<right)
        {
            temp=a[left];
            a[left]=a[right];
            a[right]=temp;
        }
    }
    temp=a[lb];
    a[lb]=a[right];
    a[right]=temp;
    return right;
}
void Quick_sort(int a[],int lb,int ub)
{
    int pivot;
    if(lb<ub)
    {
        pivot=quick_partician(a,lb,ub);
        Quick_sort(a,lb,pivot-1);
        Quick_sort(a,pivot+1,ub);
    }
}
int main()
{
    int a[]={23,54,3,4,12,23,56,87,87,89,13,12,19};
    int i,n;
    n=sizeof(a)/sizeof(int);
    printf("\n Before Quick sort: ");
    display_quick_sort(a,n);
    Quick_sort(a,0,n-1);
    printf("\n After Quick sort : ");
    display_quick_sort(a,n);
    return 0;
}
