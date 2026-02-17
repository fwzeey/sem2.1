// An armstrong number is:
// A number that is equal to the sum of its digits raised to the power of total digits.
#include <stdio.h>

int checkArmstrong(int num)
{
    int original, digit;
    int count = 0;
    int sum = 0;
    int power;
    int i;

    original = num;

    while(num != 0)
    {
        num = num / 10;
        count++;
    }

    num = original;   

    while(num != 0)
    {
        digit = num % 10;

        
        power = 1;
        for(i = 1; i <= count; i++)
        {
            power = power * digit;
        }

        sum = sum + power;

        num = num / 10;
    }

    
    if(sum == original)
        return 1;
    else
        return 0;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    
    if(checkArmstrong(number))
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");

    return 0;
}
