# OOPS in C++

###Object Oriented Programing is a periadigmn to represent real life entities in code with help of classes.


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
If You Don't create a constructor compiler is going to provide the default constructor.

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

###4 Pillars of OOPS
1. Encapsulation (bundling of data and methods together in class)
 In encapsulation we set the methods to access our data. You can not access the data directly after setting to private but can acess those with the methods of same class.

 Example for same:
```
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

```
Adding validation rules to your methods: 
```
    void setAge(int age)
    //I'm adding age validation here.
    {   if(age>=18)
        Age = age;
    }
```
2. Abstraction: it is hiding complex things behind a procedure that makes it looks simpler.
3. Inheritance
4. 