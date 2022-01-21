#include<bits/stdc++.h>
using namespace std;
int i=0;
//parser grammer s-> aAB
//A->a 
//b->B
void B(string w)
{
    if(w[i]=='b')
    {
        cout<<"This is parser grammer "<<endl ;
    }
    else
    {
        cout<<"this is not parser "<<endl;
    }
    return ;
}
void A(string w)
{
    if(w[i]=='a')
    {
        i++;B(w);
    }
    else
    {
        cout<<"this is not parser "<<endl;return ;
    }
}
void s(string w)
{
    if(w[i]=='a')
    {
        i++;A(w);
    }
    else
    {
        cout<<"this is not parser "<<endl;return ;
    }
}
int main()
{
    string w;
    cout<<"Enter the string ";    
    cin>>w;
    s(w);
    return 0;
}