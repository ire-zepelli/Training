#include <stdio.h>

int sumEven(int num, int i, int sum_Even)
{

    if(i > num){
        return sum_Even;
    }
    sum_Even += i;
    sumEven(num, i+=2, sum_Even);
}

void printEven(int num){
    static int i = 2;
    if(i <= num){
        printf("%d ", i);
        i+=2;
        printEven(num);
    }
}

int main(void)
{
    int num, i = 2;
    int sum_Even = 0;
    printf("Enter your number: ");
    scanf("%d", &num);

    printf("Even Numbers: ");
    printEven(num);
    printf("\nSum of all even numbers: %d ", sumEven(num, i, sum_Even));
}