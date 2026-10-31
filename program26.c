#include<stdio.h>
#include<stdlib.h>

int main()
{

    char sName[30];
    printf("Enter your name :");
    scanf("%[^'\n']s",sName);  //accept the input utill user not press enter
                                // ^ --> not , \n -- . enter
    printf("Welcome %s\n",sName);

    return EXIT_SUCCESS;
}