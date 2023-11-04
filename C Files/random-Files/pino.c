#include <stdio.h>

int main(void)
{

    int i, n, choice;

    printf("Enter a postitve integer: ");
    scanf("%d", &n);

    printf("---MENU---\n");
    printf("1------ODD\n");
    printf("2-----EVEN\n");
    printf("3----PRIME\n");
    printf("4-----EXIT\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // odd
        for (i = 1; i < n; i = +2)
        {
            printf("%d", i);
        }
        break;

    case 2:
        for (i = 0; i < n; i = +2)
        {
            printf("%d", i);
        }
    }
}