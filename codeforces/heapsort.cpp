#include<bits/stdc++.h>
using namepsace std;
void heapify(vector<int>arr,int i,int n)
{
    int lef=2*i+1;
    int rig=2*i+2;
    int large=i;
    if(large<n && arr[lef]>arr[large])
    {
        swap(arr[lef],arr[large]);
    }
    if(large<n && arr[rig]>arr[large])
    {
        swap(arr[rig],arr[large]);
    }
    heapify(arr,2*large+1,n);
}

void heap_sort(vector<int>arr,int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,i,n);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,0,i);
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    heap_sort(arr,n);
    cout<<"\n Array after heap sort : ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"  ";
    
    return 0;
}