#include<bits/stdc++.h>
using namespace std;
void table_fun(int x,int c)
{
    if(c>10)
    return;
    else
    {
        cout<<x<<" * "<<c<<" = "<<x*c<<endl;
        c++;
        return table_fun(x,c); 
    }
} 
int factorial_fun(int  n)
{
    if(n==1)
    return 1;
    else
    {
        return n*factorial_fun(n-1);
    }

}
int fibo_fun(int x)
{
    if(x<=1)
    {
        return x;
    }
    else
    {
        return fibo_fun(x-1)+fibo_fun(x-2);
    }

}
int linear_search(vector<int>arr ,int n)
{
    for(int i=0;i<n;i++)
    {

    }
    return -1;
}

int main()
{
    int n,x,loc;
    cout<<"Enter size of array "<<endl;
    cin>>n;
  
    vector<int>arr(n,0);
    cout<<"Enter "<<n<<"integer value "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter search value"<<endl;
    cin>>x;
    loc=linear_search(arr,n,x);
    return 0;
}
//  table_fun(n,c);
    // int ans=factorial_fun(n);
    // cout<<"factoriaal of "<<n<<"is "<<ans;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<fibo_fun(i)<<endl;
    // }