// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i,n,va;
//     string ke;
//     map<string,int>dict;
//         cin>>n;
//         for(i=0;i<n;i++){
//             cout<<" \n Enter key and value : ";
//             cin>>ke>>va;
//             dict.insert(pair<string,int>(ke,va));
        
//         }
//     map<string,int>::iterator itr;
//     cout<<"\n The map dict is : \n ";
//     cout<<"\tKey \tElement : \n";
//     for(itr=dict.begin();itr!=dict.end();itr++)
//     {
//         cout<<"\t"<<itr->first<<"\t"<<itr->second<<endl;
//     }
//     cout<<"\n The map EVEN dict is : \n ";
//     cout<<"\tKey \tElement : \n";
//     for(itr=dict.begin();itr!=dict.end();itr++)
//     {
//         if(itr->first=="anas")
//         {
//             cout<<"\t"<<itr->first<<"\t"<<itr->second<<endl;
//         }
//     }
//     return 0;
// }
/*
while(cin >> name) {
    if (pBook.find(name) != pBook.end()) {
        cout << name << "=" << pBook.find(name)->second << endl;
    } else {
        cout << "Not found" << endl;
    }
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    long val;
    string ke;
    map<string,long>dict;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ke>>val;
        dict[ke]=val;
        //dict.insert(pair<string,int>(ke,val));

    }
    // vector<string>str(n);
    // for(i=0;i<n;i++)
    // cin>>str[i];
    
    
    // for(i=0;i<n;i++)
    // {
       // map<string,long>::iterator itr;
        //itr=dict.find(str[i]);
       while(cin>>ke){
        if(dict.find(ke)!= dict.end())
        cout<<ke<<"="<<dict.find(ke)->second<<endl;

        // if(itr!=dict.end())
        // cout<<str[i]<<"="<<itr->second<<endl;
        else
        cout<<"Not found"<<endl;    
       }
    //}

return 0;
}












/*
map<int, int> gquiz1;
  
    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(4, 20));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50));
    gquiz1.insert(pair<int, int>(7, 10));
  
    // printing map gquiz1
    map<int, int>::iterator itr;
    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
*/