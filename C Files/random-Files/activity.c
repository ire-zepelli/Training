#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int a, b;
    float x, y;
    
    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);
    
    int int_sum = a+b;
    int int_difference = a-b;
    float float_sum = x+y;
    float float_difference = x-y;
    
    printf("%d %d\n", a, b);
    printf("%0.1f %0.1f", x , y);
      
    return 0;
}