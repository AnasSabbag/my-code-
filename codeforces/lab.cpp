// #include<bits/stdc++.h>
// using namespace std;
// void table_fun(int x,int c)
// {
//     if(c>10)
//     return;
//     else
//     {
//         cout<<x<<" * "<<c<<" = "<<x*c<<endl;
//         c++;
//         return table_fun(x,c); 
//     }
// } 
// int factorial_fun(int  n)
// {
//     if(n==1)
//     return 1;
//     else
//     {
//         return n*factorial_fun(n-1);
//     }

// }
// int fibo_fun(int x)
// {
//     if(x<=1)
//     {
//         return x;
//     }
//     else
//     {
//         return fibo_fun(x-1)+fibo_fun(x-2);
//     }

// }
// int main()
// {
//     int n,c=1;
//     cin>>n;
//   //  table_fun(n,c);
//     // int ans=factorial_fun(n);
//     // cout<<"factoriaal of "<<n<<"is "<<ans;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<fibo_fun(i)<<endl;
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
void shell_sort(vector<int>arr,int n)
{
    int d,i,j,t,key;
    d=n/2;
    while(d>0)
    {
        
        for(i=d;i<n;i++)
        {
            key=arr[i];
            j=i-d;
               while(j>=0 && key < arr[j])
               {
                   arr[j+d]=arr[j];j-=d;
               } 
            arr[j+d]=key;
        }
        
        d/=2;
    }


    cout<<"\n after shell sort operation applied "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int i,n,j;
    cin>>n;
    vector<int>arr(n,0);
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    shell_sort(arr,n);

}