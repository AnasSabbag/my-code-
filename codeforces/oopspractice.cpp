// #include<bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     int year;
//     string branch;
//     public:
//     void getdata()
//     {
//         cout<<"Enter the name of student "<<name;
//         cin>>name;
//         cout<<"Enter the year of student ";
//         cin>>year;
//         cout<<"ENter branch of student ";
//         cin>>branch;
//     }
//     void showdata()
//     {
//         cout<<"Name : "<<name<<"\nYear : "<<year<<"\nBranch : "<<branch;
//     }
// };
// int main()
// {
//     student std1;
//     //std1.getdata();
//     std1.name="Anas";
//     std1.year=3;
//     std1.branch="CSE";
//     std1.showdata();
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q0,q1,s;
    string str;
    s=q1;
    cout<<"Enter string "<<endl;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='0' && s==q0)
        {
            s=q1;
        }
        if(str[i]=='0'&& s==q1)
        {
            s=q0;
        }
    }

    if(s==q0)
    {
        cout<<"string is accepted for even no of 0 "<<endl;
    }
    else
    cout<<"string is not accepted for even no of 0 "<<endl;
return 0;

}