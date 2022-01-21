#include<stdio.h>
int main()
{
    int i,j,sp,n,k;
    scanf("%d",&n);
    sp=n;
    for(i=1;i<=n;i++)
    {
        for(sp=n;sp>i;sp--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=i-1;k>=1;k--)
        printf("%d",k);

        printf("\n");
    }


    return 0;
}
