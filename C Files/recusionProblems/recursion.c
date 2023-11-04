#include <stdio.h>

int printNatural(int num, int i);

int main(void)
{
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printNatural(num, i);
}

int printNatural(int num, int i){
    if(i <= num){
        printf("%d ", i);
        printNatural(num, i+1);
    }
}