#include <stdio.h>

int sumOdd(int num, int i, int sum_Odd)
{
    if(i > num){
        return sum_Odd;
    }
    sum_Odd += i;
    sumOdd(num, i+=2, sum_Odd);
}

void printOdd(int num){
    static int i = 1;
    if(i <= num){
        printf("%d ", i);
        i+=2;
        printOdd(num);
}
}

int main(void)
{
    int num, i = 1;
    int sum_Odd = 0;
    printf("Enter your number: ");
    scanf("%d", &num);

    printf("Odd numbers:");
    printOdd(num);
    printf("\nSum of all even numbers: %d ", sumOdd(num, i, sum_Odd));
}