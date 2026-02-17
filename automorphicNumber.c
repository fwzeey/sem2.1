//automorphicnumber it is a number automorphic , its square ends with the same number. 
#include <stdio.h>

int checkAutomorphic(int num)
{
    int square;
    int temp;

    square = num * num;
    temp = num;

    while(temp != 0)
    {
        if((temp % 10) != (square % 10))
        {
            return 0;   
        }

        temp = temp / 10;
        square = square / 10;
    }

    return 1;   
}   

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(checkAutomorphic(number))
        printf("Automorphic Number\n");
    else
        printf("Not Automorphic Number\n");

    return 0;
}
