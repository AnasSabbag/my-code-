#include<stdio.h>
#include<stdlib.h>
int main()
{
    long n,m,k,s,rm,a[100];
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
       scanf("%ld %ld %ld",&n,&m,&s);
      rm= m+s-n;
      k=abs(rm-1);
     if(rm=0)
        a[j]=m+s-1;
     //else if(rm==0)
      //  a[j]=1;
     else if(k%n==0)
        a[j]=n;
     else
     a[j]=k%n;

    }

    for(int i=0;i<t;i++)
        printf("%ld \n",a[i]);

    return 0;
}
