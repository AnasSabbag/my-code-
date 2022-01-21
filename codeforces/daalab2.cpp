// #include<bits/stdc++.h>
// using namespace std;
// void insertsion_sort(vector<int>arr,int n)
// {
//     int i,j,key;
// for(i=1;i<n;i++)
// {
//    key=arr[i];j=i-1;
//     while(j>=0 && arr[j]>key)
//     {
//         arr[j+1]=arr[j];
//         j--;
//     }
//     arr[j+1]=key;
// }
// cout<<"\n sorted by insertion sort "<<endl;
// for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// void selection_sort(vector<int>arr,int n)
// {
//     int i,mini,j,loc;

//     for(i=0;i<n;i++)
//     {
//         mini=arr[i];
//         for(j=i+1;j<n;j++)
//         {
//             if(mini >arr[j])
//             {
//                     mini=arr[j];loc=j;
//             }
//         }
//         swap(arr[i],arr[loc]);
//     }


// cout<<"\n sorted by selection sort "<<endl;
// for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }


// }



// void Bubble_sort(vector<int>arr,int n)
// {
//     int i,j;
//     for(i=0;i<n-1;i++)
//     {
//         for(j=0;j<n-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }

//     cout<<"\n sorted by bubble sort "<<endl;
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }
// int main()
// {
//     int n,i,s;
//     printf("\n Enter the size of array ");
//     scanf("%d",&n);
//     vector<int>arr(n,0);
//     cout<<"\n Enter  integer value in sorted order for array : "<<n;
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     insertsion_sort(arr,n);
//     Bubble_sort(arr,n);
//     selection_sort(arr,n);

//     return 0;
// }    
// #include<bits/stdc++.h>
// using namespace std;
// #define maxi 100
// vector<int>res(maxi,0);
// int fibo(int n)
// {
//     if(res[n]==0)
//     {
//          if(n<=2)
//          {
//              res[n]=n;
//          }
//          else
//          res[n]=fibo(n-1)+fibo(n-2);
//     }
//     return res[n];
// }
// int main()
// {
//     int n;
//     cout<<" n = ? ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     cout<<fibo(i)<<" "<<endl;
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
void merge(int arr[], int lb,int m,int ub)
{
    int i,j,k;
    int n1,n2;
    int lef[10],rig[10];
    n1=m-lb+1;
    n2=ub-m;
    for(i=0;i<n1;i++)
    lef[i]=arr[lb+i];
    for(i=0;i<n2;i++)
    rig[i]=arr[m+i+1];
    i=0;k=lb;j=0;
    while(i<n1 && j<n2)
    {
        if(lef[i]<=rig[j])
        {
            arr[k]=lef[i];i++;k++;
        }
        else{
        arr[k]=rig[j];
            k++;j++;
        }
    }
    while(i<n1 )
    {
         arr[k]=lef[i];i++;k++;
    }
    while( j<n2)
    {
         arr[k]=rig[j];j++;k++;
    }

}
void merge_sort(int arr[],int lb,int ub)
{
    int m;
    if(lb<ub)
    {
        m=(lb+ub)/2;
        merge_sort(arr,lb,m);
        merge_sort(arr,m+1,ub);
        merge(arr,lb,m,ub);
    }
}







int main()
{
    int n,i;
    // cout<<"\n Enter the size of vector/array ";
    // cin>>n;
    // //vector<int>arr(n,0);

    printf("\n engter tghe size of aray " );
    scanf("%d",&n);
    int arr[10];
    printf("\n Enter %d eleemnt for vector/array",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    merge_sort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}