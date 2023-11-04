#include <stdio.h>

int countDigits(int num);

int main(void)
{
    int num;

    printf("Input a number : ");
    scanf("%d", &num);

    printf("The number of digits in the number is : %d", countDigits(num));
}

int countDigits(int num){
    static int counter=0;
    if(num == 0){
        return counter;
    }
    num/=10;
    counter++;
    return countDigits(num);
}
