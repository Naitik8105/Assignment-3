#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    int num_sqr = num * num;
    int temp = num_sqr;
    int count = 0;

    while (temp != 0)
    {
        temp /= 10;
        count++;
    }

    for (int i = 1; i < count; i++)
    {
        double divisor = pow(10, (double)i);
        int num1 = num_sqr / divisor;
        int num2 = num_sqr - (num1 * divisor);
        if (num1 == 0 || num2 == 0)
        {
            continue;
        }

        if (num1 + num2 == num)
        {
            printf("This is a Kaprekar number.\n");
            return 0;
        }
    }

    printf("This is not a Kaprekar number.\n");
    return 0;
}