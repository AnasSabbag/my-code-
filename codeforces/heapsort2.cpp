// // #include<bits/stdc++.h>
// // using namespace std;
// // void heapify(int arr[],int i,int n)
// // {
// //     int lef=2*i+1;
// //     int rig=2*i+2;
// //     int large=i;
// //     if(large<n && arr[lef]>arr[large])
// //     {
// //         swap(arr[lef],arr[large]);
// //     }
// //     if(large<n && arr[rig]>arr[large])
// //     {
// //         swap(arr[rig],arr[large]);
// //     }
// //     heapify(arr,2*large+1,n);
// // }

// // void heap_sort(int arr[],int n)
// // {
// //     for(int i=n/2-1;i>=0;i--)
// //     {
// //         heapify(arr,i,n);
// //     }
// //     for(int i=n-1;i>=0;i--)
// //     {
// //         swap(arr[0],arr[i]);
// //         heapify(arr,0,i);
// //     }
// // }

// // int main()
// // {
// //     int n,arr[10];
// //     cin>>n;
// //     // vector<int>arr(n,0);
// //     for(int i=0;i<n;i++)
// //     cin>>arr[i];
// //     heap_sort(arr,n);
// //     cout<<"\n Array after heap sort : ";
// //     for(int i=0;i<n;i++)
// //     cout<<arr[i]<<"  ";
    
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
//     // public:
//     //     string name;
//     //     int id;
//     //     string  course;
//     //     // Student()//constructor
//     //     // {

//     //     // }
//     private:
//         int marks;
//     public:
//         void setmarks(int m)
//         {
//             marks=m;
//         }
//         int getmarks()
//         {
//             return marks;
//         }

// };
// int main()
// {
//     Student s1;
//     s1.setmarks(75);
//     cout<<"using encapsulation marks is : "<<s1.getmarks();
//     return 0;
    
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Hello World";
    int n=10,cons=15,s,c=0;
    int arr[]={5,6,8,10,2,9,3,7,1,4};
    int i,j,k;
    int a,b,cc;
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
                        //by the property of valid triangle sum of its two side is greater than its 3rd side    
                        a=arr[i];b=arr[j];cc=arr[k];
                       if((s+arr[k]>=cons) ||(a+b <= cc) || (a+cc<=b) || (b+cc<=a))
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


    cout<<"ans="<<c;
    

    return 0;
}
