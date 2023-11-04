#include <stdio.h>

int main(void){
    int n, greater_n = 0, greater_count = 0;
    do
    {
        printf("Input a number: ");
        scanf("%d", &n);
        if(n > greater_n){
            greater_n = n;
            greater_count += 1;
        }
    } while (n != 0 && greater_count != 3);

    if(n == 0){
        printf("Program Ended due to an input of 0\n");
    }
    else{
        printf("Program Ended to 3 charges in the greatest num\n");
    }

    printf("The greatest is %d", greater_n);
}
