#include<stdio.h>
#include<stdlib.h>
void Radix_sort(int a[],int n)
{
    int bucket[20][10];
    int counter[10];
    int i,r,j,div=1,maximum,digit=0;
    int k,f,g;
    maximum=a[0];
    for(i=0;i<n;i++)                    // int a[]={170,045,075,802,198,129,90,024,002,066};
    {
        if(a[i]>maximum)
        maximum=a[i];
    }
    while(maximum!=0)
    {
        digit++;
        maximum/=10;
    }
    for(i=0;i<digit;i++)
    {
        for(j=0;j<10;j++)
            counter[j]=0;
        for(k=0;k<n;k++)
        {
            r=(a[k]/div)%10;
            f=counter[r];
            bucket[f][r]=a[k];
            printf("\n bk[ f = %d][ r = %d] = a[ k = %d]= %d ",f,r,k,a[k]);
            counter[r]+=1;
        }
        j=0;
        for(k=0;k<n;k++)
        {
            for(g=0;g<counter[k];g++)
            {
                a[j]=bucket[g][k];
                printf("\n a[%d]=bucket[%d][%d] = %d ",j,g,k,a[j]);
                j++;
            }
        }

        div*=10;
    }



}
void Display_Radix_sort(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);
}

int main()
{
    int a[]={170,45,75,802,198,129,90,24,2,66};
    int n,i;
    n=sizeof(a)/sizeof(int);
     //Display_Radix_sort(a,n);
    Radix_sort(a,n);
    Display_Radix_sort(a,n);
    return 0;
}
