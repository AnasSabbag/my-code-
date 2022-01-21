// #include<bits/stdc++.h>
// using namespace std;
// const long long int MOD = 1000000007;
// long long int binaryconvertor(long long int n)
// {
//     if(n==0)
//     return 0;
//     else if(n==1)
//     {
//         return 1;
//     }
//     else
//     return ((n%2)+10*binaryconvertor(n/2))%MOD;
// }
// void solving(long int n,long int k)
// {
//    long  int r,p,ans=0,i=0;
//    p=k;
//    while(p!=0)
//    {
//        ans+=(p%2)*pow(n,i);i++;
//        p/=2;
//    }
//    ans=ans%MOD;
//     cout<<ans<<endl;
// }
// int main()
// {
//      long int  n,k;
//     int t;
//     cin>>t;
//     while(t--)
//     {
//          cin>>n>>k;
//         solving(n,k);
//     }
// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void solution()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ma=max(a,b);
    int a1=1,b1=1,c1=1;
    ma=max(ma,c);
    if(a==b && b==c)
    {
        cout<<a1<<" "<<b1<<" "<<c1<<endl;return ;
    }
    if(ma==a )
    {
        if(a==b)
        {
            a1=ma-a+1; b1=ma-b+1;c1=ma-c+1;
        }
        else if(a==c)
        {
            a1=ma-a+1;b1=ma-b+1;c1=ma-c+1;
        }
        else{
        a1=ma-a;
        b1=ma-b+1;c1=ma-c+1;
        }
    }
    else if (ma==b)
    {
        if(b==c)
        {
            b1=ma-b+1;a1=ma-a+1;c1=ma-c+1;
        }
        else{
        b1=ma-b;
        c1=ma-c+1;a1=ma-a+1;
        }
    }
    else
    {
        c1=ma-c;
        b1=ma-b+1;
        a1=ma-a+1;
    }

    cout<<a1<<" "<<b1<<" "<<c1<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;

}//0 3 4// 0 3 3