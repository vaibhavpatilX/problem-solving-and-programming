#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

        Array(int iLength)
        {
            cout<<"Inside Constructor"<<"\n";
            iSize = iLength;
            Arr = new int[iSize]
        }
        ~Array()
        {
            cout<<"Inside Destructor"<<"\n";
            delete[]Arr;
        }
        void Accept()
        {
            cout<<"Enter the value\n";
            int i = 0;

            for(i=0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        void Display()
        {
            cout<<"Enter the value\n";
            int i = 0;

            for(i=0; i < iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
};


int main()
{
    Array obj1(4);
    Array obj2(6);

    return 0;
}
