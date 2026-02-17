// GCD graetest common divisor it is largest number that divides both numbers without remainder.
#include <stdio.h>

int findGCD(int a, int b)
{
    int temp;

    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    printf("GCD = %d\n", findGCD(num1, num2));

    return 0;
}