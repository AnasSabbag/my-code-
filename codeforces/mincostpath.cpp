#include<bits/stdc++.h>
using namespace std;
void matrix_input(vector<vector<int>>arr,int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
}
void mincostpath(vector<vector<int>>arr,int m,int n)
{
    int i,j;
    vector<vector<int>>dp(m,vector<int>(n,0));
    for(i=0;i<n;i++)//initialise dp raw first 
    {
        dp[0][i]=arr[0][i];
    }
    for(i=0;i<m;i++)//initialise dp column first same as 
    {
        dp[i][0]=arr[0][i];
    }

    for(i=1;i<m;i++)
    {
        for(j=1;j<m;j++)
        {
            dp[i][j]=arr[i][j] + min( min ( dp[i][j-1] , dp[i-1][j] ), dp[i-1][j-1] );
        } 
    }

    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    cout<<dp[i][j]<<"  ";
    cout<<endl;


}
int main()
{
    int m,n;
    vector<vector<int>>arr(m,vector<int>(n,0));
    cout<<"\nEnter the size of 2D Matrix ";
    cin>>m>>n;
    //Matrix_input(arr,m,n);
     int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    mincostpath(arr,m,n);
    
    return 0;
}