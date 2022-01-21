#include <bits/stdc++.h>
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
    int a,b,c,ma;
    cin>>a>>b>>c;
    ma=max(a,b);
    ma=max(ma,c);
    if(ma==a && a==b)
    {
        cout<<ma-a+1<<" "<<ma-b+1<<" "<<ma-c+1<<endl;
    }
    
   
       
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

