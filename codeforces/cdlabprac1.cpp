// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // //     int q0,q1,s;
// // //     string str;
// // //     s=q1;
// // //     cout<<"Enter string "<<endl;
// // //     cin>>str;
// // //     for(int i=0;i<str.size();i++)
// // //     {
// // //         if(str[i]=='0' && s==q0)
// // //         {
// // //             s=q1;
// // //         }
// // //         if(str[i]=='0'&& s==q1)
// // //         {
// // //             s=q0;
// // //         }
// // //     }

// // //     if(s==q0)
// // //     {
// // //         cout<<"string is accepted for even no of 0 "<<endl;
// // //     }
// // //     else
// // //     cout<<"string is not accepted for even no of 0 "<<endl;
// // // return 0;

// // // }


// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int q0,q1,q2,s;
// //     int c=1;
// //     string str;
// //     s=q0;
// //     cout<<"Enter string "<<endl;
// //     cin>>str;
// //     int n=str.size();
// //     for(int i=0;i<n;i++)
// //     {
// //         if(s==q0 && str[i]=='a')
// //         {
// //             s=q1;
// //         }
// //         if(s==q1 && (str[i]=='a' || str[i]=='b')&& i<n-1)
// //         {
// //             continue;
// //         }
// //         if(s==q1 && i==n-1 && str[i]=='b')
// //         {
// //             s=q2;
// //         }
// //         else
// //         {
// //              c=0;
// //             break;
// //         }

// //     }

// //     if(s==q2 && c!=0)
// //     {
// //         cout<<"string is accepted for : a(a+b)*b :  "<<endl;
// //     }
// //     else
// //     cout<<"string is not accepted for : a(a+b)*b : "<<endl;

// // return 0;

// // }



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=32,i;
//     vector<string>str={"auto",	"double","int",	"struct",
// "break","else",	"long","switch",
// "case",	"enum",	"register",	"typedef",
// "char","extern","return","union",
// "continue","for","signed","void",
// "fdo","if","static","while","default","goto","sizeof","volatile",
// "const","float","short","unsigned"};
//    string str2;
//    cout<<"\n Enter string for lexical analyser : ";
//    cin>>str2;
   
//     for(i=0;i<n;i++)
//     {
//        if(str2==str[i])
//        {
//            cout<<"\n string "<<str2<<" is valid keyword ";break;
//        }
//     }
//     if(i==n)
//     {
//       cout<<"\n string "<<str2<<" is not valid keyword ";   
//     }

// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n,i;
    char ch;
    cout<<"\n ENter your string : ";
    cin>>str;
    ch=str[0];
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
    {

        for( i=0;i<str.length();i++)
        {
            if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>=49 && str[i]<=57)||str[i]=='_')
            {
                continue;
            }
            else
            {
                cout<<"this is not identifier ";
                return 0;
            }
        }

        if(i==str.length())
        {
            cout<<"valid identifier ";
            return 0;
        }

    } 
    else
            {
                cout<<"this is not identifier ";
                return 0;
            }

    return 0;
}