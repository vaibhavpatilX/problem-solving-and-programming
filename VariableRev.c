
//
//  Application Name : Local variable and Global variable
//  Input :     10 , 20 , 30
//  Output :     
//  Author :    Vaibhav Sanjay Patil
//  Date :      04 October 2022
//

#include<stdio.h>

int X=10;        //Global Variable(Data)                                     //Common watch

    void Demo()
    {
        int B = 30;     //Local variable(Stack)                                //Personal watch
        
        printf("Value of B feom Demo : %d\n",B);
        printf("Value of X from Demo : %d\n",X);
        //printf("%d",A);
    }

    int main()
    {
        int A = 20;     //Local Variable(Stack)                                //Personal watch

        printf("Value of A from main : %d\n",A);
        printf("Value of X from main : %d\n",X);

        //printf("%d",B);

        Demo();

        return 0;
    }