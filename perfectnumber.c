//perfect number is a positive number that is equal to the sum of its proper divisor.
#include <stdio.h>


int checkPerfect(int num)
{
    int i;
    int sum = 0;

    
    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }

    
    if(sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    
    if(checkPerfect(number))
        printf("Perfect Number\n");
    else
        printf("Not Perfect Number\n");

    return 0;
}
