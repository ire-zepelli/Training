#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    int arr[num][num];
    int *ptr = &arr[0][0];

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (j == num)
            {
                *ptr = i + 1;
            }
            else
            {
                *ptr = i;
            }
            ptr++;
        }
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}