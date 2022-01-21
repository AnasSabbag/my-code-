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
    int i,n,j,mini,maxi;
    cin>>n;
    vector<int>arr(n,0);
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a,b;
    mini=*min_element(arr.begin(),arr.end());
    maxi=*max_element(arr.begin(),arr.end());
    for(i=0;i<n;i++)
    {
        if(arr[i]==mini)
        {
            a=i;break;
        }
    }//a is index of min elemnt
    for(i=0;i<n;i++)
    {
        if(arr[i]==maxi)
        {
            b=i;break;
        }
    }// b index of max elemnt

    vector<int>temp(n,0);
    for(i=0;i<n/2;i++)
    {
        temp[i]=temp[n-i-1]=i+1;
    }
    int ans;
    if(a<n/2 && b<n/2)
    {
        ans=max(a,b)+1;
    }
    else if(a>n/2 && b>n/2)
    {
        ans=n-min(a,b);
    }
    else
    {
        // a < mid <b
        ans = min(temp[a],temp[b]);


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




