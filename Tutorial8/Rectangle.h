#include <iostream>
#include "math.h"
using namespace std;

class Rectangle
{
    private:
        double width;
        double height;
        string name;

    public:

        Rectangle()
        {
            cout << "Deafault Constructor is called." << endl;
            width = 0;
            height = 0;
            name = "Undefined";
        }

        Rectangle(double width, double height, string name)
        {
            cout << "Constructor is called for " << name << endl;
            SetWidth(width);
            SetHeight(height);
            SetName(name);
        }

        void SetWidth(double width)
        {
            if (width >= 0)
                this->width = width;
            else
                cout << "Width cannot be negative." << endl;
        }

        void SetHeight(double height)
        {
            if (height >= 0)
                this->height = height;
            else
                cout << "Height cannot be negative." << endl;
        }

        void SetName(string name)
        {
            this->name = name;
        }

        double GetWidth()
        {
            return width;
        }

        double GetHeight()
        {
            return height;
        }

        string GetName()
        {
            return name;
        }

        double CalculateArea()
        {
            return width * height;
        }

        double CalculatePeremeter()
        {
            return 2 * (width + height);
        }

        double CalculateDiagonal()
        {
            return sqrt( pow(width, 2) + pow(height, 2) );
        }

        void Print()
        {
            cout << name << ", width = " << width << ", height = " << height << endl;
        }

        ~Rectangle()
        {
            cout << name << " Destructor is called" << endl;
        }
};