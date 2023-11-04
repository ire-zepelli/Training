#include <stdio.h>

int main()
{
    int input;
    printf(" Enter your numner: ");
    scanf("%d", &input);

    for (int i = 1; i < input + 1; i++)
    {
        for (int j = 0; j < input; j++)
        {
            if (j == input - 1)
            {
                printf("%d ", i+1);
                break;
            }
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}