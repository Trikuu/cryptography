#include <stdio.h>
int main()
{
    float x,y;
    int a,b,q,r;
    printf("Enter the two numbers:\n");
    scanf("%f %f", &x, &y);
    if (x!=(int)x || y!=(int)y)
    {
        printf("Invalid input! Enter integers only.");
        return 0;
    }
    a = (int)x;
    b = (int)y;
    if (b<=0)
    {
        printf("Invalid input! Second number must be greater than 0.");
        return 0;
    }
    q=a/b;
    r=a%b;
    printf("The Quotient is %d\n", q);
    printf("The Remainder is %d", r);
    return 0;
}