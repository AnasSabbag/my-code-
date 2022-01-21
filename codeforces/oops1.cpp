#include<bits/stdc++.h>
using namespace std;
class Employee
{
    public:
    string Name;
    string Company;
    int Age;
    void display()
    {
        cout<<"Name : "<<Name<<endl;
        cout<<"Company : "<<Company<<endl;
        cout<<"Age : "<<Age<<endl;
    }
    Employee(string name,string company,int age)
    {
        Name=name;
        Company=company;
        Age=age;
    }
};
int main()
{
    Employee emp1=Employee("anas","xqwe",21);
    // emp1.name="Anas";
    // emp1.company="xyz";
    // emp1.Age=21;
     emp1.display();


        return 0;
}