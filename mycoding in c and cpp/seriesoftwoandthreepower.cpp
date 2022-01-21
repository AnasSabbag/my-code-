#include<stdio.h>
#include<math.h>
int seriesfun(int term)
{
    if(term%2==1)
        return pow(2,term/2);
    else
        return pow(3,term/2-1);
}
int main()
{
    int term,k;
    scanf("%d",&term);
    k=seriesfun(term);
    printf("%d",k);
    return 0;
}
