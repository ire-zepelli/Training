#include <stdio.h>

int sum(int range);

int main(void){
    int range;
    printf("Input the last number of the range starting from 1 : ");
    scanf("%d", &range);

    printf("Sum: %d", sum(range));
}

int sum(int range){
    if(range == 1)
    return 1;
    
    return range + sum(range-1);
}