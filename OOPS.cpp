#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee{
    virtual void askForPromotion () =0;
};

class Employee:AbstractEmployee
{

private:
    string Company;
    int Age;

protected:
    string Name;


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

class Developer: Employee {
    public:
         string FavouriteProgramingLanguage;

    Developer(string name, string company, int age, string favouriteProgramingLanguage):Employee(name , company, age) { 
    FavouriteProgramingLanguage = favouriteProgramingLanguage;
    }

    void FixBug() {
        cout<<Name << " fixed bug using " << FavouriteProgramingLanguage<< endl;
    }
};
int main()
{

    Developer D = Developer("Ashish", "Google" , 23, "C++");
    D.FixBug();
}
 