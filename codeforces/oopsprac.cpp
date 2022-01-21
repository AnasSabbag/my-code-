// #include<bits/stdc++.h>
// using namespace std;
// class Employee
// {
//     public:
//     string Name;
//     string Company;
//     int Age;
//     void display()//behavior/characteristick
//     {
//         cout<<"Name : "<<Name<<endl;
//         cout<<"Company : "<<Company<<endl;
//         cout<<"Age : "<<Age<<endl;
//     }
//     Employee(string name,string company,int age)//constructor
//     {
//         Name=name;
//         Company=company;
//         Age=age;
//     }
// };
// int main()
// {
//     Employee emp1=Employee("anas","xqwe",21);
//     // emp1.name="Anas";
//     // emp1.company="xyz";
//     // emp1.Age=21;
//      emp1.display();
//         return 0;
// }
#include<bits/stdc++.h>
using namespace std;
class student
{
   public:
    string name;
    int rollno;
    string branch;
    void display()
    {
        cout<<"Name : "<<name<<endl<<"rollno : " <<rollno<<endl<<"Branch : "<<branch;
    }
    student(string Name,int Rollno,string Branch)
    {
        name=Name;rollno=Rollno;branch=Branch;
    }

};
int main()
{
    student std1=student("Anas",6,"CSE1");
    std1.display();
    
    return 0;
}

