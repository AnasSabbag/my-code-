// #include<bits/stdc++.h>
// using namespace std;
// int c=0;
// int sum_of_subset(vector<int>arr,int n,int in,int target,int sum)
// {
//     if(in==target)
//         c++;
//     if(in>target)
//     {
//         return 0;
//     }
//     if(n>0&&((in+arr[n-2])<target)){
//         sum_of_subset(arr,n-1,in+arr[n-1],target,sum-arr[n-1]);
//         sum_of_subset(arr,n-1,in,target,sum-arr[n-1]);
//     }
//     return c;
// }
// int main()
// {

//     int n,i,target=5,sum;
//     cin>>n;
//     vector<int>arr(n,0);
//     for(i=0;i<n;i++)
//     cin>>arr[i];
//     sum=accumulate(arr.begin(),arr.end(),0);
//     cout<<sum_of_subset(arr,n,0,target,sum);

//     return 0;
// }

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Hello World";
    int n=10,cons=15,s,c=0;
    int arr[]={5,6,8,10,2,9,3,7,1,4};
    int i,j,k;
    //int a,b,c;
    for(i=0;i<n-2;i++)
    {
        if(arr[i]>=cons )
        {
            continue;
        }
        else
        {
            s=arr[i];
            for(j=i+1;j<n-1;j++)
            {
                if(s+arr[j]>=cons)
                {
                    continue;
                }
                else
                {
                    s+=arr[j];
                    for(k=j+1;k<n;k++)
                    {
                        if(s+arr[k]>=cons)
                        {
                            continue;
                        }
                        else if(((arr[i]+arr[j])<arr[k]))||((arr[i]+arr[k])<arr[j])) ||((arr[j]+arr[k])<arr[i])))
                        {
                            continue;
                        }
                        else
                        {
                            c++;
                            cout<<arr[i]<<arr[j]<<arr[k]<<endl;
                        }
                    }
                }

            }

        }

    }

}
    cout<<"ans="<<c;
    

    return 0;
}
