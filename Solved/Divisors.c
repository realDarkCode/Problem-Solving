#include <stdio.h>

void main()
{
    int number;
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d\n", i);
        }
    }
}