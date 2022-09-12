#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
    double height;

public:
    Person()
    {
        name = "?Undefined_Name?";
        age = 0;
        height = 0;
    }

    Person(string name, int age, double height)
    {
        this->name = name;
        this->age = age;
        this->height = height;
    }

    string GetName()
    {
        return name;
    }

    void Print()
    {
        cout << this->name << ": you are " << age << " years old, and " << height << " cm height." << endl;
    }

    bool EqualAge(Person *p)
    {
        if (this->age == p->age)
            return true;
        else
            return false;
    }

};

int main()
{
    Person *p1 = new Person ("John", 20, 180);
    Person *p2 = new Person ("Jack", 22, 178);
    Person p3("David", 20, 190);

    p1->Print();
    p2->Print();
    p3.Print();

    if (p1->EqualAge(p2))
        cout << p1->GetName() << " has the same age as " << p2->GetName() << endl;
    else
        cout << p1->GetName() << " does not have the same age as " << p2->GetName() << endl;

    if (p1->EqualAge(&p3))
        cout << p1->GetName() << " has the same age as " << p3.GetName() << endl;
    else
        cout << p1->GetName() << " does not have the same age as " << p3.GetName() << endl;


    cout << endl;
    return 0;
}