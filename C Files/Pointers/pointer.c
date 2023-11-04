#include <stdio.h>

int main(){
    int i = 69, *ptr1 = &i;
    int j = 96, *ptr2 = &j;
    printf("Before: \n");
    printf("%d\n", *ptr1);
    printf("%d\n", *ptr2);

    // ptr1 = ptr2; is not the same with line 11.
    *ptr1 = *ptr2; 

    printf("After: \n");
    printf("%d\n", *ptr1);
    printf("%d\n", *ptr2);

    return 0;
}