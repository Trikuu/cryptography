#include <stdio.h>
int main()
{
    unsigned long long prime;
    printf("Enter the number: ");
    scanf("%llu", &prime);
    if (prime < 2)
    {
        printf("Its not a prime");
        return 0;
    }
    for (int i = 2; i * i <= prime; i++)
    {
        if (prime % i == 0)
        {
            printf("Its not a prime");
            return 0;
        }    }
    printf("Its a prime");
   return 0;
}