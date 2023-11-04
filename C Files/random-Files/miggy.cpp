#include <stdio.h>

int main()
{

    int input, choice;
    do
    {
        printf("Enter a positive integer: \n");
        scanf("%d", &input);
    } while (input <= 0);

    do
    {
           
    printf("-----MENU-----\n");
    printf("1.Even Integers\n");
    printf("2.Odd Integers\n");
    printf("3.Prime Integers\n");
    printf("4.Exit\n");

    scanf("%d", &choice);

    switch (choice)
    {

    case 1:
        for (int i = 2; i <= input; i += 2)
        {
            printf("%d ", i);
        }
    case 2:
        for (int i = 1; i <= input; i += 2)
        {
            printf("%d ", i);
        }
    case 3:
        for (int i = 2; i <= input; i++)
        {
            int isPrime = 1;
            for (int j = 2; j < i; j++)
            {
                if(i%j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("%d ", i);
            }
        }
    }
    } while (choice != 4);

}