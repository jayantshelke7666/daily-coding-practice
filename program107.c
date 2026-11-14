#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void CheckPrime(int iNo)
{
    int i=0;
    int iSum = 0;

    for(int i = 1; i<=iNo/2; i++)
    {
        if((iNo % i) ==0) 
        {
            iSum = iSum + i;
        }
    }
    if(iSum == 1)
    {
        printf("It is prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
}

int main(void)
{
    int iValue = 0;
    
    printf("Enter number :");
    scanf("%d",&iValue);

    CheckPrime(iValue);

    return EXIT_SUCCESS;
}