#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
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
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet)
    {
        printf("It is prime number");
    }
    else
    {
        printf("It is not a prime number");
    }

    return EXIT_SUCCESS;
}