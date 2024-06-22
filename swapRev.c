#include<stdio.h>

int main()
{
    int no1=0;
    int no2=0;

    printf("Enter 1st number : \n");
    scanf("%d",&no1);

    printf("Enter 2nd number : \n");
    scanf("%d",&no2);

    no1=no1+no2;
    no2=no1-no2;
    no1=no1-no2;

    printf("numbers are %d %d",no1,no2);

    
    return 0;
}