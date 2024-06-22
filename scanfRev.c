#include<stdio.h>

int main ()
{
    int no1=0;
    int no2=0;
    int Ans=0;
    printf("Enter first  number\n");
    scanf("%d",&no1);

    printf("Enter second number\n");
    scanf("%d",&no2);

    //Addition

    Ans = no1+no2;

    printf("Answer is %d\n",Ans);

    //Multiflication

    Ans = no1*no2;

    printf("Answer is %d\n",Ans);

    //Subtraction

    Ans = no1-no2;

    printf("Answer is %d\n",Ans);

    //Division

    Ans = no1/no2;

    printf("Answer is %d\n",Ans);

    return 0;
}