//prime numbers are preime nubers that divide a number completely
#include <stdio.h>


void findPrimeFactors(int num)
{
    int i;

    
    while(num % 2 == 0)
    {
        printf("2 ");
        num = num / 2;
    }

    
    for(i = 3; i <= num; i = i + 2)
    {
        while(num % i == 0)
        {
            printf("%d ", i);
            num = num / i;
        }
    }
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Prime factors are: ");
    findPrimeFactors(number);

    return 0;
}
