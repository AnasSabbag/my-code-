#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define MXL 1000000000
#define all(x) x.begin(), x.end()
#define loopAhead(i,a,b) for(int i = a;i<=b;i++)
#define loopBack(i,a,b) for(int i = b;i>=a;i--)

const int MOD = 1000000007;
typedef long long ll;     typedef vector<vector<int>> vvi; typedef vector<int> vi;
typedef pair<int,int> pii;typedef vector<vector<ll>> vvl;  typedef vector<ll> vl;

void solver()
{
    int n,i,a,b;
    cin>>n;
    vector<int>arr(n,0);
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mini,maxi;
    maxi=*max_element(arr.begin(),arr.end());
    mini=*min_element(arr.begin(),arr.end());
    for(i=0;i<n;i++)
    {
        if(arr[i]==mini)
        {
            a=i;break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==maxi)
        {
            b=i;break;
        }
    }
    vector<int>temp(n,0);
    for(i=0;i<n;i++)
    {
        if(i<n/2)
        temp[i]=i+1;
        else
        temp[i]=n-i;
    }
    int ans;
    ans=temp[a];
    for(i=a+1;i<n;i++)
    {
        if(i<(n+1+a)/2)
        {
            temp[i]=i-(a+1)+1;
        }
        else
        temp[i]=n-i;
    }
    ans+=temp[b];
    cout<<"ans "<<ans<<endl;

}


int main() {
     //ios_base::sync_with_stdio(false);
    //cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
        solver();
    }
    return 0;
}






// #include<bits/stdc++.h>
// using namespace std;
// int linear_search(vector<int>arr ,int n,int x)
// {
//     // for(int i=0;i<n;i++)
//     // {
//     //     if(x==arr[i])
//     //     {
//     //         return i;
//     //     }
//     // }
//     // return -1;
// }

// int main()
// {
//     int n,x,loc;
//     cout<<"Enter size of array "<<endl;
//     cin>>n;
  
//     vector<int>arr(n,0);
//     cout<<"Enter "<<n<<"integer value "<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Enter search value"<<endl;
//     cin>>x;
//     loc=linear_search(arr,n,x);
//     if(loc==-1)
//     {
//         cout<<x<<"Element is not present in arrray/vector"<<endl;
//     }
//     else
//     cout<<x<<"Element is  present in arrray/vector at location : "<<loc+1<<endl;
    
//     return 0;
// }

