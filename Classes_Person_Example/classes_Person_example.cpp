// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// arhamcreed@outlook.com

#include <iostream>
using namespace std;

class Person
{
    //data members
private:
    int birthYear;
    int SIN;
    string name;

    //functionalities / methods
public:

    int static numOfPersons;

    Person()
    {
        cout << "Default constructor is called" << endl;
        birthYear = 1970;
        SIN = 0;
        name = "";
        numOfPersons++;
    }

    Person(int birthYear, int SIN, string name)
    {
        cout << "Constructor with three parameters is called" << endl;
        this->birthYear = birthYear;
        this->SIN = SIN;
        this->name = name;
        numOfPersons++;
    }

    ~Person()
    {
        numOfPersons--;
        cout << "Destructor is called, deleting person with name: " << this->name << endl;
        cout << "Current number of persons: " << numOfPersons << endl << endl;
    }

    void setSIN(int sin)
    {
        if (sin > 1000)
            SIN = sin;
        else
            cout << "Cannot assign a value less than 1000 to SIN" << endl;
    }

    int getSIN()
    {
        return SIN;
    }

    void setBirthYear(int year)
    {
        birthYear = year;
    }

    int getBirthYear()
    {
        return birthYear;
    }

    void setName(string nme)
    {
        name = nme;
    }

    string getName()
    {
        return name;
    }

    void Print()
    {
        cout << "Name: " << name << endl;
        cout << "Birth year: " << birthYear << endl;
        cout << "SIN: " << SIN << endl << endl;
    }

    int Age()
    {
        return (2022 - birthYear);
    }

};

int Person::numOfPersons = 0;

int main()
{
    Person persons[3];

    persons[0].setBirthYear(1980);
    persons[0].setSIN(223456667);
    persons[0].setName("Dafe");

    persons[1].setBirthYear(1990);
    persons[1].setSIN(123432543);
    persons[1].setName("Ali");

    persons[2].setBirthYear(1995);
    persons[2].setSIN(444323121);
    persons[2].setName("John");

    cout << "After creating persons, numOfPersons = " << Person::numOfPersons << endl;

    cout << "--------------------------------------" << endl;

    for (int i = 0; i < Person::numOfPersons; i++)
    {
        persons[i].Print();
    }

    cout << "--------------------------------------" << endl;

    for (int i = 0; i < Person::numOfPersons; i++)
    {
        cout << persons[i].getName() << "'s age = " << persons[i].Age() << endl;
    }

    cout << "--------------------------------------" << endl;

}
