#include<stdio.h>

int main()

{
    int no1 = 11;
    int no2 = 51;

    printf("Print numbers \n %d %d",no1,no2);

    no2=no2-no1;
    no1=no1+no2;
    no2=no1-no2;

    printf("Print swap %d %d",no1,no2);
    return 0 ;
}