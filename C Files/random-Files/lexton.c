#include <stdio.h>
int main(void){

    int n, q, bit_1, bit_2, bit_3, bit_4, bit_5, bit_6, bit_7, bit_8;
    printf("Input a number (1-255): ");
    scanf("%d", &n);
    if(n > 255 || n <= 0){
        printf("Invalid Input!");
    }
    else{
    q=n/2;
    bit_1=n%2;
    bit_2=q%2;
    q=q/2;
    bit_3=q%2;
    q=q/2;
    bit_4=q%2;
    q=q/2;
    bit_5=q%2;
    q=q/2;
    bit_6=q%2;
    q=q/2;
    bit_7=q%2;
    q=q/2;
    bit_8=q%2;
    q=q/2;
    printf("%d%d%d%d%d%d%d%d", bit_8, bit_7, bit_6, bit_5, bit_4, bit_3, bit_2, bit_1);
    }
    
}