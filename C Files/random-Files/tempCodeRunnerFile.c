/*
Name: Benedict Avenido
Section: BSIT-1B
Date of Creation: 12/3/2023
*/

#include <stdio.h>

int main(void){
    //initialize string as an array of characters
    char string[100];
    //prompts the user to put a name
    printf("Tell me your name!\n");
    if (scanf("%99[^\n]", string) == 1) {
        // Displays the string
        printf("Hello, %s!!\n", string);
        // if input is invalid
        printf("Error input.\n");
    }
}