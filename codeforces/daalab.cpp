// #include<bits/stdc++.h>
// using namespace std;
// int binary_search(vector<int>arr,int lb,int ub,int s)
// {
//     int mid;
//     if(lb<=ub)
//     {
//         mid=(lb+ub)/2;
//         if(arr[mid]==s)
//         {
//             return mid;
//         }
//         if(arr[mid]>s){
//             binary_search(arr,lb,mid,s);
//         }
//         else        
//         binary_search(arr,mid+1,ub,s);
//     }
//     else
//     return -1;

// }
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

// }
// void Bubble_sort(vector<int>arr,int n)
// {
//     int i,j;
//     for(i=0;i<n;i++)
//     {
//         for(j=i+1;j<n-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//             }
//         }
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
// //     cout<<"\n Enter the search value ";
// //     cin>>s;
// //     int pos= binary_search(arr,0,n-1,s);
// //     if(pos==-1)
// //     {
// //         cout<<"\n element is not present in the array "<<s;
// //     }
// //     else
// //    cout<<"\n element "<<s<<" is present in the position  in the array "<<pos;

//     insertsion_sort(arr,n);
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

    
//     return 0;

// }

//2d array rotation


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i,j,n,c=1;
//     cin>>n;
//     vector<vector<int>>arr(n,vector<int>(n,0));
//     cout<<"\n Enter "<<n<<" by "<<n<<" matrix "<<endl;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             arr[i][j]=c;
//             c++;
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             cout<<arr[i][j]<<"   ";
//         }
//         cout<<endl;
//     }
//     int t,k,l,m;
//     for(i=0;i<n/2;i++)
//     {
//         t=arr[i][i];
//         for(j=i;j<n-1-i;j++)
//         {
//             arr[i][j]=arr[i][j+1];
//         }
//         for(k=i;k<n-1-i;k++)
//         {
//             arr[k][j]=arr[k+1][j];
//         }
//         for(l=j;l>i;l--)
//         {
//             arr[k][l]=arr[k][l-1];
//         }
//         for(m=k;m>i+1;m--)
//         {
//             arr[m][l]=arr[m-1][l];
//         }
//         arr[m][l]=t;
//     }

//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             cout<<arr[i][j]<<"   ";
//         }
//         cout<<endl<<endl;
//     }



//     return 0;
// }

// //Quick sort
// #include<bits/stdc++.h>
// using namespace std;
// void swap2(int *p1,int *p2)
// {
//     int t;
//     t=*p1;
//     *p1=*p2;
//     *p2=t;
// }

// #include<stdio.h>
// int quick_sort(int arr[], int lb,int ub)
// {
//     int l,r,piv,t;
//     l=lb+1;r=ub;
//     piv=arr[lb];
//     while(l<r)
//     {
//         while(piv>arr[l])
//             l++;
//         while(piv<arr[r])
//             r--;
//         if(l<r)
//         {
//              t=arr[l];
//             arr[l]=arr[r];
//             arr[r]=t;
//             l++;r--;
//         }   
//         //swap2(&arr[l],&arr[r]);
//     }
//     //swap2(&arr[lb],&arr[r]);
//     if(arr[lb]>arr[r]){
//     t=arr[lb];
//     arr[lb]=arr[r];
//     arr[r]=t;
//     }
//     return r;

// }
// void quick_partitioning(int arr[],int lb,int ub)
// {
//     int k;
//     if(lb<ub)
//     {
//         k=quick_sort(arr,lb,ub);
//         quick_partitioning(arr,lb,k-1);
//         quick_partitioning(arr,k+1,ub);
//     }

// }
// int main()
// {
//     int n,i;
//     // cout<<"\n Enter the size of vector/array ";
//     // cin>>n;
//     // //vector<int>arr(n,0);

//     printf("\n engter tghe size of aray " );
//     scanf("%d",&n);
//     int arr[10];
//     printf("\n Enter %d eleemnt for vector/array",n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     quick_partitioning(arr,0,n-1);
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
void counting_sort(vector<int>arr,int n)
{
    int i,k;
    k=*max_element(arr.begin(),arr.end()) - *min_element(arr.begin(),arr.end())+1;
    vector<int>ct(k+1,0);
    for(i=0;i<n;i++)
    {
        ct[arr[i]]=ct[arr[i]]+1;
    }
    for(i=1;i<=k;i++)
    {
        ct[i]+=ct[i-1];
    }
    vector<int>temp(ct[i-1],0);
    for(i=n-1;i>=0;i--)
    {
        temp[ct[arr[i]]--]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        arr[i]=temp[i];
        cout<<arr[i]<<"  ";
    }

}

int main()
{
    int i,n;
    cout<<"Enter the size of array/vector ";
    cin>>n;
    vector<int>arr(n,0);
    for(i=0;i<n;i++)
    cin>>arr[i];
    counting_sort(arr,n);return 0;

}
