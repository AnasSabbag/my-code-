#include<bits/stdc++.h>
#include<windows.h>
#include <fstream>
#include<unistd.h>
using namespace std;

void startalarm() {
    string filename="sample.wav";
    PlaySound(filename.c_str(),NULL,SND_SYNC);
}
void alarm_clock(int HH,int MM,int SS)
{
     int hh,mm,ss;
     cout<<"\n eneter the initial time of clock in hh : mm : ss \n";
     cin>>hh>>mm>>ss;
     while(1)
     {
            system("cls");
            cout<<hh<<" : "<<mm<<" : "<<ss<<endl;
            if(HH==hh && MM==mm && SS==ss)
            {
                cout<<" \n Wake up Wake up !!!!! ";
                startalarm();
                return ;
            }
            ss++;
            if(ss==60)
            {
                mm++;ss=0;
                if(mm==60)
                {
                    hh++;
                    if(hh=24)
                    {
                     hh=0;
                    }
                    mm=0;
                }
            }
            sleep(1);
        }
}
int main()
{
    // startalarm();
    // while(1) {
    //     sleep(3);
    // }
    // return 0;
            int hh,mm,ss;
        cout<<"\n Enter time alarm time in hh:mm:ss ";
        cin>>hh>>mm>>ss;
        if(hh>24 || mm>60 || ss>60)
        {
            cout<<"Please enter correct format for time ";
            
        }
        else
       alarm_clock(hh,mm,ss);
       

        return 0;
}


// // #include<bits/stdc++.h>
// // include <Mmsystem.h>
// // #include <mciapi.h>
// // //these two headers are already included in the <Windows.h> header
// // #pragma comment(lib, "Winmm.lib")
// // using namespace std;
// // int main()
// // {
// //     return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// void solver()
// {
//     int n,i,j,min_id,max_id;
//     int maxi,mini;
//     cin>>n;
//     vector<int>arr(n,0);
//     vector<int>brr(n,0);
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     mini=*min_element(arr.begin(),arr.end());
//     maxi=*max_element(arr.begin(),arr.end());
//     for(i=0;i<n;i++)
//     {
//         if(arr[i]==mini);
//         {
//             min_id=i;break;
//         }

//     }
//     for(i=0;i<n;i++)
//     {
//         if(arr[i]==maxi);
//         {
//             max_id=i;break;
//         }

//     }
    
//     for(i=0;i<=n/2;i++)
//     {
//         brr[i]=brr[n-i-1]=i+1;
//     }
//         int ans;
//         if(brr[min_id]<brr[max_id])
//         {
//             ans=brr[min_id];
//             arr.erase(arr.begin()+min_id);
//             for(i=0;i<arr.size();i++)
//             {
//                 if(arr[i]==maxi)
//                 {
//                 max_id=i;
//                 //break;
//                 }
//             }   
//             for(i=0;i<=arr.size()/2;i++)
//             {
//                 brr[i]=brr[n-i-2]=i+1;
//             }
//             ans+=brr[max_id];

//         }
//         else{
//         ans=brr[max_id];
//         arr.erase(arr.begin() + max_id);

//             for(i=0;i<arr.size();i++)
//             {
//                 if(arr[i]==mini)
//                 {
//                 min_id=i;//break;
//                 }
//             }   
//             for(i=0;i<=arr.size()/2;i++)
//             {
//                 brr[i]=brr[n-i-2]=i+1;
//             }
//             ans+=brr[min_id];

//         }
//         cout<<"ans = "<<ans<<endl;
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         solver();
//     }
//     return 0;
// }
