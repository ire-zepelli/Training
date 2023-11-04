#include <stdio.h>

int sumfib(int fib1, int fib2, int term, int i, int sum);
int fib(int fib1, int fib2, int term, int i);

int main(void)
{
    int term;
    int fib1 = 0, fib2 = 1;
    int i = 1;

    printf("Input number of terms for the Series : ");
    scanf("%d", &term);

    printf("The Series are :\n");
    printf("1 ");
    fib(fib1, fib2, term, i);

    int sum = 1;

    printf("\nThe sum of the series is\n");
    printf("%d", sumfib(fib1, fib2, term, i, sum));
}

int fib(int fib1, int fib2, int term, int i)
{
    int nextTerm;
    if (i == term)
    {
        return 0;
    }
    else
    {
        nextTerm = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextTerm;
        printf("%d ", nextTerm);

        return fib(fib1, fib2, term, i + 1);
    }
}
int sumfib(int fib1, int fib2, int term, int i, int sum)
{
    int nextNum;
    if (i == term)
    {
        return sum;
    }
    nextNum = fib1 + fib2;
    fib1 = fib2;
    fib2 = nextNum;
    sum = sum + nextNum;

    return sumfib(fib1, fib2, term, i + 1, sum);
}