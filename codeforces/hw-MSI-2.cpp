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
    int n,i,c=0,j,t,f,st,en;
    cin>>n;
    vector<int>arr(n,0);
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=0;i<n;i++)
    {
        f=0;st=i%2;
        if(st==0)
        en=n-2;
        else
        en=n-1;
        for(j=st;j<en;j=j+2)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;c++;f=1;
              
            }
        }
        if(f==0)
        break;
    }

   
    cout<<"ans = "<<c<<endl;return;
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