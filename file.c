#include<stdio.h>
#include<math.h>
int milage(int km, int fuel)
{
    return km/fuel;
}
int main()
{
    int km, fuel;
    printf("Enter the distance travelled in kilometers: ");
    scanf("%d", &km);
    printf("Enter the fuel consumed in liters: ");
    scanf("%d", &fuel);
    
    int cost_per_liter = 1.5; 
    int total_cost = fuel * cost_per_liter;
    
    printf("Total fuel cost: %.2f\n", total_cost);
    
    return 0;
}