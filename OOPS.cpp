#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void introduceMySelf()
    {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1;
    employee1.Name = "Ashish";
    employee1.Company = "Google";
    employee1.Age = 23;
    employee1.introduceMySelf();

    Employee employee2;
    employee2.Name = "Saldina";
    employee2.Company = "YT-Codebeauty";
    employee2.Age = 35;
    employee2.introduceMySelf();
}