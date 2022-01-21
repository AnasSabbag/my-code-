#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter your line/strings ";
    getline(cin,str,'X');
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='{'||str[i]=='}')
        {
            cout<<endl;
        }
        if(str[i]==' ')
        {
            continue;
        }
        else
        cout<<str[i];
    }
    return 0;

}