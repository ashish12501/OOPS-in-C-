#include <bits/stdc++.h>
using namespace std;

class Employee
{

private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        if (age > 18)
            Age = age;
    }
    int getAge()
    {
        return Age;
    }

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

    employee1.setName("ShahRukh");
    employee1.setAge(43);

    cout << employee1.getName() << " is " << employee1.getAge() << " years old";
}
