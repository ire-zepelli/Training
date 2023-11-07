#include <stdio.h>

int isPrime(int n, int i){
    if(n <=2 ){
        return (n == 2)?1:0;
    }
    if(n % i == 0){
        return 0;
    }
    if(i * i > n){
        return 1;
    }
    return isPrime(n,i+1);
}

int main(void){
    int n, i=2;
    printf("Enter your number: ");
    scanf("%d", &n);

    isPrime(n,i) ? printf("%d is a prime number", n) : printf("%d is a NOT prime number", n);
    
}