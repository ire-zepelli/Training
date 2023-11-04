#include <stdio.h>

void printElements(int arr[]);
int size;

int main(void)
{
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("The elements in the array are : ");
    printElements(arr);
}

void printElements(int arr[])
{
    static int i = 0;

    if (i < size)
    {
        printf("%d ", arr[i]);
        i++;
        return printElements(arr);
    }
}