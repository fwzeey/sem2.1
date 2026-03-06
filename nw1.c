#include <stdio.h>


int power(int a, int b);

int main() {
    int a, b, result;
    printf("Enter base(a): ");
    scanf("%d",&a);

    printf("Enter exponent(b): ");
    scanf("%d", &b);

    result = power(a, b);

    printf("Power = %d\n", result);

    return 0;

}
int power(int a, int b) {
    int i, res = 1;
    for (i = 1; i <= b; i++) {
        res = res * a;
    }
    return res;
}