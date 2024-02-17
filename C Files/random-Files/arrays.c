/*
Name: Benedict Avenido
Section: BSIT-1B
Date of Creation: 12/3/2023
*/

#include <stdio.h>

int main(void)
{
    // initialize string as an array of characters
    char string[100];
    // prompts the user to put a name
    printf("Tell me your name: ");
    scanf("%99s", string);
    printf("-------------------\n");
    // displays the string by traversing through the array
    printf("Hello, ");
    for (int i = 0; string[i] != '\0'; i++)
    {
        printf("%c", string[i]);
    }
    printf("!\n");
    printf("-------------------\n");
}

// void printEven(int arr[]){
//     //iterate through the array
//     for(int i = 0; i < 4; i++){
//         //check if the value is even
//         if(arr[i] % 2 == 0){
//             //print even
//             printf("%d ", arr[i]);
//         }
//     }
// }