#include <stdio.h>

int sumDigits(int num);

int main(void)
{
    int num;
    printf("Input any number to find sum of digits: ");
    scanf("%d", &num);

    printf("The Sum of digits of %d = %d", num, sumDigits(num));
}

int sumDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return num%10 + sumDigits(num/10);
}