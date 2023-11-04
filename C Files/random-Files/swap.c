#include <stdio.h>

int main(void){
    int length, width, space;

    printf("Enter tower height: ");
    scanf("%d", &length);

    printf("Enter tower width: ");
    scanf("%d", &width);

    if(width%2 == 0){
        for(int i = width/2; i > 0; i-- ){
            printf(" ");
        }
        printf("**\n");
    }
    else{
        for(int i = width/2+1; i > 0; i--){
            printf(" ");
        }
        printf("*\n");
    }
    for(int i= 0; i < length; i++){
        printf(" ");
        for(int j = 0; j < width; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = width + 2; i > 0; i--){
        printf("*");
    } 
    }