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
   int n,i,a,b,s=0,c1=0,c2=0,l,f1,j=0;
   cin>>n>>a>>b;
   string str;
   cin>>str;
   if(b>=0)
   {
       cout<<(a+b)*n<<endl;return;
   }
   else{
       char k=str[0];f1=0;
       if(n==1)
       {
           cout<<(a+b)<<endl;return;
       }
       j=1;
       for(i=0;i<n;i++)
       {
           if(str[i]==k)
           {
               c1++;
               if(c2!=0 && f1==0)
               {
                   s+=(a*c2+b);c2=0;f1=1;
                   if(j%3==0)
                    f1=0;
                    j++;
               }
           }
           if(str[i]!=k)
            {
                c2++;
                if(c1!=0 && f1==1)
                {
                    s+=(a*c1+b);c1=0;f1=0;
                    if(j%3==0)
                    f1==1;
                    j++;
                }
            }
       }
        if(c1!=0)
        {
            s+=(a*c1+b);
        }
        if(c2!=0)
        {
            s+=(a*c2+b);            
        }
    cout<<s<<endl;return;
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