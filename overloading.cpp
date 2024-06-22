#include<iostream>
using namespace std;

class Overloading
{
    public:
        int Add(int a, int b)
        {
            cout<<"Addition of 2 integers\n";
            return a+b;
        }

        float Add(float a, float b)
        {
            cout<<"Addition of floats\n";
            return a+b;
        }

        double Add(double a, double b)
        {
            cout<<"Addition of doubles\n";
            return a+b;
        }

        int Add(int a, int b, int c)
        {
            cout<<"Addition of 3 integers\n";
            return a+b;
        }

        void Fun(int a, float b)
        {}

        void Fun(float x, int y)
        {}
};

int main()
{
    Overloading obj;
    
    obj.Add(11,21);
    obj.Add(11,21,51);
    obj.Add(10.9,89.5);
    obj.Add(10.9f,89.5f);
    return 0;
}
