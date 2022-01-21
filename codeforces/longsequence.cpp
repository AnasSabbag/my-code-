#include<bits/stdc++.h>
using namespace std;
int longest_increases_sequence(vector<int>arr,int n)
{
    int i,j;
    vector<int>lis(n,1);
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]>arr[j] && lis[i]<lis[j]+1)
            {
                lis[i]=lis[j]+1;
            }
        }
    }
    return *max_element(lis.begin(),lis.end());
}
int main()
{
    int i,n;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++)
    cin>>arr[i];
    int LIS=longest_increases_sequence(arr,n);
    cout<<"\n the longest increases subsequence is "<<LIS;
    return 0;
}