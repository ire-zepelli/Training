#include <stdio.h>

int factorial(int num){
    if(num == 0){
        return 1;
    }
    return num * factorial(num-1);
}

int main(void)
{
    int num;

    printf("Input a number : ");
    scanf("%d", &num);

    printf("The factorial of %d: %d", num, factorial(num));
}