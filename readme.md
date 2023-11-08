# OOPS in C++
## Acces modifiers are of three types.

1. Private
2. Public
3. Protected

### Code for assigning in public modifier
```
#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;
};

int main()
{
    Employee employee1;
    employee1.Name = "Ashish";
    employee1.Company = "Google";
    employee1.Age = 23;
}

```

### Code for adding behaviour in classes 
```
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

```
If You Dont create a constructor copiler is going to provide the default constructor.

1. Connstructor does not have any return type.
1. Constructor is of same name as Class.
2. Constructor must be public.

Constructor is a method (function) that has no return type.

### How to create constructor and use it to store value.

```
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

```