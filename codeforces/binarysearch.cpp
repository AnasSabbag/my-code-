// #include<bits/stdc++.h>
// using namespace std;
// int binary_search(int arr[],int lb,int ub,int s)
// {
//     int mid;
//     if(lb<=ub)
//     {
//         mid=(lb+ub)/2;
//         if(arr[mid]==s)
//         {
//             return mid;
//         }
//         if(arr[mid]>s){
//             binary_search(arr,lb,mid,s);

//         }
//         else        
//         binary_search(arr,mid+1,ub,s);
//     }
//     return -1;

// }
// int main()
// {
//     int arr[100],n,i,s;
//     printf("\n Enter the size of array ");
//     scanf("%d",&n);
//     printf("\n Enter %d integer value in sorted order for array : ",n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("\n Enter the search value ");
//     scanf("%d",&s);
//     int pos= binary_search(arr,0,n-1,s);
//     if(pos==-1)
//     {
//         printf("\n %d element is not present in the array ",s);
//     }
//     else
//     printf("\n %d element is present in the position %d in the array ",s,pos);
//     return 0;

// }
#include<bits/stdc++.h>
using namespace std;
 typedef struct Student
    {
           int age;
           char first_name[50];
           char last_name[50];
           int standard;
    }Student;
    
int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}