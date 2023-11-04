#include <stdio.h>

int getDecimal(int decimal);
int convertBinary(int decimal);
int getdecimal(int decimal);
int reverse(int number);
int getdigits(int number);
int power(int counter);
int isPalindrome(int num1, int num2);

int main(void)
{
    int decimal, binary, reverseBinary;

    decimal = getDecimal(decimal);

    binary = convertBinary(decimal);
    printf("The value of your soul is %d.\n", binary);

    reverseBinary = reverse(binary);
    if (isPalindrome(reverseBinary, binary))
    {
        printf("You are worthy my child.");
    }
    else
    {
        printf("Ahh, you are filty. Be gone.");
    }
}

int getDecimal(int decimal){
    printf("Enter your number: ");
    scanf("%d", &decimal);
    return decimal;
}
int isPalindrome(int num1, int num2)
{
    if (num1 == num2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int getdigits(int number)
{
    int count = 0;
    for (int i = 0; number > 0; i++)
    {
        number /= 10;
        count++;
    }
    return count;
}

int power(int counter)
{
    int raised = 1;

    for (int i = 1; i <= counter; i++)
    {
        raised *= 10;
    }
    return raised;
}

int reverse(int number)
{
    int reverseBinary = 0, curr;
    int counter = getdigits(number);

    for (int i = counter; number > 0; i--)
    {
        curr = number % 10;
        reverseBinary += curr * power(i - 1);
        number /= 10;
    }
    return reverseBinary;
}

int convertBinary(int decimal)
{
    int temp, binary = 0;
    for (int base = 1; decimal > 0; base *= 10)
    {
        temp = decimal % 2;
        binary += temp * base;
        decimal /= 2;
    }
    return binary;
}