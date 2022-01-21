#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum =0;
    float awt,atat;
    cout<<"Enter the no. of process: ";
    cin>>n;
    int bt[n],tat[n]={0} , wt[n] = {0},at[n];

    for(int i =0; i< n; i++){
        cout<<"For Process P"<<i+1<<endl;
        cout<<"Enter the arrival time: ";
        cin>>at[i];
        cout<<"Enter the burst time: ";
        cin>>bt[i];
    }



    //sort(bt,bt+n);
    int ind[n],sumArr[n];
    int st;
    for(int i=0; i< n; i++){
        int min_at;
        int z = 1000;
        if(i ==0){
            for(int j =0; j<n; j++){
                if(z>at[j]){   min_at = j; z = at[j]; st = at[j]; }
            }
            sum += bt[min_at]+ at[min_at];
            // cout<<min_at<<" "<<at[min_at]<<bt[min_at]<<endl;
            sumArr[i] = sum;
            ind[i] = min_at+1;

        }
        else{
            for(int j =0; j<n; j++){
                if(z>bt[j] and bt[j] !=-1 and at[j]<= sum){   min_at = j; z = bt[j]; }
            }
            sum += bt[min_at];
            // cout<<min_at<<" "<<at[min_at]<<" "<<bt[min_at]<<endl;
            sumArr[i] = sum;
            ind[i] = min_at+1;
        }
        tat[i] = sum - at[min_at];
        wt[i] = tat[i] - bt[min_at];
        at[min_at] = -1;
        bt[min_at] = -1;
    }
    sum =0;
    for(int i =0; i<n ; i++){
       //cout<<tat[i]<<" ";
        sum += tat[i];
        // cout<<tat[i];
    }
    // cout<<sum<<" ";
    atat = (float)sum/(float)n;

    sum =0;
    for(int i =0; i<n ; i++){
        //cout<<wt[i]<<" ";
        sum += wt[i];
    }
    awt = (float)sum/(float)n;
    cout<<"TAT is: "<<atat<<endl;
    cout<<"Wt is: "<<" "<< awt;
    cout<<endl<<endl;
    cout<<"GANTT CHART:\n\n";

        cout<<st;
        for(int j =0;j<n; j++){
            cout<<"        "<<sumArr[j];
        }
        cout<<endl<<"*";
        for(int j =0;j<n; j++){
            cout<<"***";
        }
        cout<<endl;
        for(int j =0;j<n; j++){
            if(j == 0) cout<<"*        *";
            else cout<<"        *";
        }
        cout<<endl;
        for(int j =0;j<n; j++){
            if(j==0) cout<<"*   P"<<ind[j]<<"   *";
            else cout<<"   P"<<ind[j]<<"   *";
        }
        cout<<endl;
        for(int j =0;j<n; j++){
            if(j == 0) cout<<"*        *";
            else cout<<"        *";
        }
        cout<<endl<<"*";
        for(int j =0;j<n; j++){
            cout<<"***";
        }


    return 0;
}
