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
    Employee employee1 = Employee("ASHISH", "Google", 25);
    employee1.introduceMySelf();

    Employee employee2 = Employee("Saldina", "Youtube", 35);
    employee2.introduceMySelf();
}