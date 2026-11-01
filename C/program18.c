#include<stdio.h>
#include<stdlib.h>


void CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("It is Even Number\n");
    }
    else
    {
        printf("It is Odd Number\n");
    }
}

int main()
{

    int ivalue = 0;

    printf("Enter the No : \n");

    scanf("%d", &ivalue);

    CheckEven(ivalue);

    return EXIT_SUCCESS;
}