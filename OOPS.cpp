#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee{
    virtual void askForPromotion () =0;
};

class Employee:AbstractEmployee
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
     void askForPromotion (){
        if(Age>30) cout<<Name<<" got promoted"<<endl;
      else 
        cout<<Name<<" sorry you are not promoted"<<endl;

     }
};

int main()
{
    Employee employee1 = Employee("ASHISH", "Google", 25);

    Employee employee2 = Employee("Saldina", "Youtube", 35);
    
    employee1.askForPromotion();
    employee2.askForPromotion();

}
 