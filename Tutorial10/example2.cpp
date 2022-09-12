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

        void Print()
        {
            cout << name << ": you are " << age << " years old, and " << height << " cm height." << endl;
        }
};

int main()
{
    Person p1;
    p1.Print();

    Person p2("John", 20, 180);
    p2.Print();

    cout << "Size of p1: " << sizeof(p1) << " bytes." << endl;
    cout << "Size of p2: " << sizeof(p2) << " bytes." << endl;

    Person * p = new Person("Jack", 23, 175);

    //way 1  
    cout << "Printing information of dynamically allocated object, directly using the pointer: " << endl;
    p -> Print();

    //way 2
    cout << "Printing information of dynamically allocated object, using the object itself: " << endl;
    (*p).Print();

    cout << "Size of p: " << sizeof(p) << " bytes."  << endl;
    cout << "Size of object allocated to p: " << sizeof(*p) << " bytes."  << endl;

    //array of 5 persons

    cout << "Method 1: " << endl;
    //method 1
    Person* persons = new Person[5];

    for (int i = 0; i < 5; i++)
        persons[i].Print();

    cout << endl;
    cout << "Method 2: " << endl;
    //method 2
    Person ** persons2 = new Person*[5];

    persons2[0] = new Person("Michael", 28, 190);
    persons2[1] = new Person("David", 25, 177);
    persons2[2] = nullptr;
    persons2[3] = nullptr;
    persons2[4] = nullptr;

    for (int i = 0; i < 5; i++)
        if (persons2[i] != nullptr)
            persons2[i]->Print();
    

    persons2[2] = new Person("Moh", 20, 100);

    cout << endl << "After adding the third object: " << endl;
    for (int i = 0; i < 5; i++)
        if (persons2[i] != nullptr)
            persons2[i]->Print();

    cout << endl;
    return 0;
}
