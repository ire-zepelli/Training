#include <stdio.h>

int find(int decimal_number)
{
    if (decimal_number == 0) 
        return 0; 
    else
        return (decimal_number % 2 + 10 * 
                find(decimal_number / 2));
}

int main(void)
{
    int num, binary = 0;

    printf("Input a number : ");
    scanf("%d", &num);

    printf("%d in binary is %d", num, find(num));
}