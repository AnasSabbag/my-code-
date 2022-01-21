#include<stdio.h>
#include<stdlib.h>
struct process{
int ariv;
int burst;
}process[10];

int main()
{
    int i=0,n,j,pos;
    int ar,bt,max=100,min_burst,c=0;
    int ct[10],tat[10],wt[10],burt[10],res[10];
    printf("\n Enter the number of process : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        printf("\n Enter the arrival and burst time of process[%d] ",i+1);
        scanf("%d%d",&ar,&bt);
        process[i].ariv=ar;
        process[i].burst=bt;
        burt[i]=process[i].burst;
    }
    for(i=0;i<n;i++)
    {

        printf("\n process[%d] arrival at : %d and burst time is : %d ",i+1,process[i].ariv,process[i].burst);
    }
    i=0;
    int c1=0,sum=0;
    while(i<max)
    {
        c=0;c1=0;
        for(j=0;j<n;j++)
        {

            if(i>=process[j].ariv && process[j].burst!=0)
            {
                if(c==0){
                min_burst=process[j].burst;
                    c=1;pos=j;
                }
                else{
                    if(min_burst >process[j].burst){
                        min_burst=process[j].burst;
                        pos=j;
                    }
                }
            }
            if(process[j].burst!=0)
            c1=1;
        }
        if(c1==0)
            break;
        if(c!=0&& process[pos].burst!=0)
        {
           process[pos].burst--;
            //i+=min_burst
        }
        if(process[pos].burst==0)
        {
            ct[pos]=i+1;
            tat[pos]=ct[pos]-process[pos].ariv;
            wt[pos]=tat[pos]-burt[pos];
        }
        i++;
    }
    printf("\n Process no. \t Arrival  \t Burst \t   Complete \t Turn around \t Waiting ");
    for(i=0;i<n;i++)
    {
        printf("\n process[%d] \t %d \t\t %d \t\t %d \t\t %d \t %d ",i+1,process[i].ariv,burt[i],ct[i],tat[i],wt[i]);
    }

    return 0;
}



