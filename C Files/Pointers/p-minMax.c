#include <stdio.h>

void minMax(int arr[], int length, int *min, int *max);
void printElements(int arr[], int length);

int main()
{
    int min, max;
    int arr[] = {23, 6, 7, 45, 98, 10, 20, 1, 7, 11};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("The elements in the array: ");
    printElements(arr, length);

    minMax(arr, length, &min, &max);
    printf("\nMininum Value: %d \nMaximum Value: %d", min, max);
    return 0;
}

void printElements(int arr[], int length)
{
    static int j = 0;
    if (j < length)
    {
        printf("%d ", arr[j]);
        j++;
        printElements(arr, length);
    }
}

void minMax(int arr[], int length, int *min, int *max)
{
    *min = *max = arr[0];

    for (int i = 1; i < length; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}