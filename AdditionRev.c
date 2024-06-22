
//
//  Application Name : Addition of given numbers
//  Input :     10  , 51
//  Output :    Addition is 61
//  Author :    Vaibhav Sanjay Patil
//  Date :      04 October 2022
//

#include<stdio.h>

    int Addition(int iValue1,int iValue2)
        {    int iOutput = 0;

            iOutput = iValue1 + iValue2;
    
            return iOutput;
        }

    int main()
    {
        int iNo1 = 10;
        int iNo2 = 51;
        int iAns = 0;

        iAns = Addition(iNo1,iNo2);

        printf("Additon is %d\n",iAns);

        return 0;
    }