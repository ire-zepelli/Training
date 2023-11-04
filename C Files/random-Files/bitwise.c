#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

void calculate_the_maximum(int n, int k, int x, int y, int z)
{
    // Write your code here.
    int a, b, max_and = 0, max_or = 0, max_xor = 0;
    int and[100], or [100], xor [100];

    for (int i = 0; i < n; i++)
    {
        a = i;
        b = i + 1;
        for (int j = i; j < n; j++)
        {
            and[i] = a & b;
            or [i] = a | b;
            xor[i] = a ^ b;
        }
    }
    for (int i = 0; i < 100; i++)
    {
        if (and[i] > max_and)
        {
            if (and[i] <= 2)
            {
            max_and = and[i];
            }
        }
        if (or[i] > max_or)
        {
            if (and[i] < k)
            {
            max_or = or[i];
            }
        }
        if (xor[i] > max_or)
        {
            if (and[i] < k)
            {
            max_xor = xor[i];
            }
        }
    }
    x = max_and;
    y = max_or;
    z = max_xor;
}

    int main()
    {
        int n, k, x, y, z;
        int *pMax_and = &x;
        int *pMax_or = &y;
        int *pMax_xor= &z;

        scanf("%d %d", &n, &k);
        calculate_the_maximum(n, k, x, y, z);
        printf("%d\n", &x);
        printf("%d\n", &y);
        printf("%d", &z);
        return 0;
    }