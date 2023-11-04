#include<stdio.h>
int main(void){
int n;

do
{
    printf("Enter a Positive Integer Sir: ");
    scanf("%d", &n);
} while (n<=0);
int space = n - 1;
for (int i = 0; i < n; i++){
    for(int j = 0; j < space; j++){
        printf(" ");
    }
    for (int j = 0; j <= i; j++){
        printf("#");
    }
    
        printf(" ");

    for (int j = 0; j <= i; j++)
    {
        printf("#");
    }
    printf("\n");
    space--;

}
}