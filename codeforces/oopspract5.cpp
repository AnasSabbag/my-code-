// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
//     public:
//         string name;
//         int id;
//         string  course;
//         Student(string name1,int id1,string course1)//constructor
//         {
//             name=name1;
//             id=id1;
//             course=course1;
//         }
//         void student_detail()
//         {
//             cout<<"\nThe details of student are : ";
//             cout<<"\nName : "<<name<<"\nCollege id : "<<id<<"\nCourse Name : "<<course;
//         }
//         int sum()
//         {
//             return 0;
//         }
//         int sum(int a,int b)
//         {
//             return a+b;
//         }
//         int sum(int x,int y,int z)
//         {
//             return x+y+z;
//         }


//     // private:
//     //     int marks;     //encapsulation to hide info  
//     // public:
//     //     void setmarks(int m)   // for accessing and setting  hide info 
//     //     {
//     //         marks=m;
//     //     }
//     //     int getmarks()
//     //     {
//     //         return marks;
//     //     }

// };

// class 
// int main()
// {
//     Student s1("anas",2006,"Btech CSE");
//     Student s2("xyz",2007,"Btech cs");
//     // s1.setmarks(65);
//     // cout<<"\nThe marks of student : "<<s1.getmarks();
//     int n1,n2,n3;
//     cout<<"\nEnter the three integer number : ";
//     cin>>n1>>n2>>n3;
//     cout<<"\nthe sum() is :"<<s1.sum()<<endl;
//     cout<<"the sum(a+b) is : "<<s1.sum(n1,n2)<<endl;
//     cout<<"the sum(x+y+z) is : "<<s1.sum(n1,n2,n3)<<endl;
    


//     return 0;  
// }

// /*
// oops practice 
// 1. encapsulation
// 2. constructor
// 3. polymorphism
// 4. inheritence

// */

// #include<bits/stdc++.h>
// using namespace std;
// class Complex
// {
//     public:
//     int real,image;
//     Complex(int r=0,int i=0)
//     {
//         real=r;image=i;
//     }
//     Complex operator + (Complex const &obj)
//     {
        
//         Complex result;
//         result.real = real + obj.real;
//         result.image = image + obj.image;
//         return result;
//     }
//     Complex operator >> ()
//     void print()
//     {
//         cout<<real<<"  +  i"<<image;
//     }

// };
// int main()
// {
//     Complex x(3,4),y(5,6);
//     Complex z=x+y;
//     z.print();
    
//     return 0;
// }

#include<iostream>
#include<windows.h>
#include<fstream>
#include<unistd.h>
#include<time.h>
using namespace std;
class Alarm
{
    private:
    int h1,m1,s1;
    int h2,m2,s2;
    public:
    void set_clock(int H,int M,int S)
    {
        h1=H;m1=M;s1=S;
    }
    void set_alarm(int HH,int MM,int SS)
    {
        h2=HH;m2=MM;s2=SS;
    }
    void start_alarm()
    {
        string filename="sample.wav";
        PlaySound(filename.c_str(),NULL,SND_SYNC);
    }
    void Alarm_clock()
    {
        while(1)
        {
            system("cls");
            cout<<h1<<" : "<<m1<<" : "<<s1<<endl;
            if(h1==h2 && m1==m2 && s1==s2)
            {
                cout<<" Wake up!!!! ";
                start_alarm();
            }
            s1++;
            if(s1==60)
            {
                m1++;s1=0;
                if(m1==60)
                {
                    h1++;m1=0;
                    if(h1==24)
                    {
                        h1=0;
                    }
                }

            }
            sleep(1);
        }
    }



};
int main()
{
    int n=1,h,m,s;
    Alarm al[1];
    cout<<"Set initial time of clock  hh:mm:ss format "<<endl;
    cin>>h>>m>>s;
    al[0].set_clock(h,m,s);
    for(int i=0;i<n;i++)
    {
        cout<<"set alarm time in hh:mm:ss format "<<endl;
        cin>>h>>m>>s;
        if(h<24 && m<60 && s<60)
        al[i].set_alarm(h,m,s);
        else
        {
            cout<<"Please set alarm time correctly "<<endl;
            i--;
        }
    }
    for(int i=0;i<n;i++)
    {
        al[i].Alarm_clock();
    }
    return 0;
}