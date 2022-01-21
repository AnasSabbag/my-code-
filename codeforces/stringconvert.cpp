#include<bits/stdc++.h>
using namespace std;
int string_convert(string str1,string str2,int m,int n)
{
    //str1[m] to str2[n]
    int inser,remov,replac;
    if(m==0)
    return n;
    if(n==0)
    return m;
    if(str1[m-1]==str2[n-1])
    {
        return string_convert(str1,str2,m-1,n-1);
    }
    else{
        inser=string_convert(str1,str2,m,n-1);
        remov=string_convert(str1,str2,m-1,n);
        replac=string_convert(str1,str2,m-1,n-1);
        return 1 + min(min(inser,remov),replac);
    }
}
int mini_fun(int x,int y,int z)
{
    return min(min(x,y),z);
}
void dynamic_string_convert(string str1,string str2,int m, int n)
{
    int i,j;
    int inser,remov,replac;
    vector<vector<int>>dp(m,vector<int>(n,0)); // vector<vector<int>> vec(m, vector<int> (n, 0));
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0)
            dp[i][j]=i;
            else if(i==0)
            dp[i][j]=j;
            else if(str1[i]==str2[j])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else
            {
                inser=dp[i][j-1];
                remov=dp[i-1][j];
                replac=dp[i-1][j-1];
                dp[i][j]=1 + mini_fun(inser,remov,replac);
            }

        }
    }
    cout<<"    ";
    for(i=0;i<n;i++)
    cout<<str2[i]<<"   ";
    cout<<endl;
    for(i=0;i<m;i++)
    {
        cout<<str1[i]<<"   ";
        for(j=0;j<n;j++)
        {
            cout<<dp[i][j]<<"   ";
        }
        cout<<endl;
    }
}
int main()
{
    string str1,str2;
    cout<<"\nEnter the source string :";
    cin>>str1;
    cout<<"\n Enter the destination string :";
    cin>>str2;
    int m,n;
    m=str1.size();
    n=str2.length();
    // cout<<"\nWe require "<<string_convert(str1,str2,m,n)<<" number of operation ";
    // cout<<"to convert string : "<<str1<<" to string "<<str2;
    dynamic_string_convert(str1,str2,m,n);
    return 0;
}