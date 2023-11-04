#include <stdio.h>
int main(){
    int n;
    do
    {
        printf("Enter a Positive Integer");
        scanf("%d", &n);
    } while (n <= 0);
    
    int choice;

    printf("=====MENU=====\n 1: Get Even\n2: Get Odd\n3: Get Prime\n");
    scanf("%d", &choice);

switch (choice)
{
case 1:
    for(int i = 2; i <= n; i += 2)
    printf("%d", i);
    break;
case 2:
    for(int i = 1; i<=n; i+=2)
    printf("%d ", i);
    break;
case 3:
for(int i = 2; i <= n; i++){
    {
        int prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j  == 0)
            {
                prime = 0;
                break;
            }
            if (prime)
            {
                printf("%d, ", i);
            }
            
        }
        
    }
    

}
}}