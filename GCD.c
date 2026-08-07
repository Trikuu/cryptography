#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    if (a != (int)a || b != (int)b)
    {
        printf("Invalid input! Please enter integers only.");
        return 0;
    }
    int x = (int)a;
    int y = (int)b;
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    printf("The GCD is %d", x);

    return 0;
}