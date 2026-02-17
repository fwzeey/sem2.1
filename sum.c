#include <stdio.h>

int sumOfDigits(int num)
{
    int sum = 0;
    int digit;

    while(num != 0)
    {
        digit = num % 10;   
        sum = sum + digit;  
        num = num / 10;     
    }

    return sum;   // return after loop finishes
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Sum of digits = %d\n", sumOfDigits(number));

    return 0;
}

