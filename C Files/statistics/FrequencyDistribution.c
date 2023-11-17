#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int length, n, lowerCL, upperCL, range, classWidth, numberOfClasses;

    // gets length of the class
    printf("Enter total number of class: ");
    scanf("%d", &length);
    system("CLS");

    int class[length];

    // stores the classes into the array
    for (int i = 0; i < length; i++)
    {
        printf("Enter values: ");
        scanf("%d", &class[i]);
        system("CLS");
    }

    n = length;

    // initialize upper and lower class to the first index
    lowerCL = class[0];
    upperCL = class[0];

    // find the lower and upperlimit
    for (int i = 1; i < length; i++)
    {
        if (lowerCL > class[i])
        {
            lowerCL = class[i];
        }
        if (upperCL < class[i])
        {
            upperCL = class[i];
        }
    }

    // calculates the # of classes
    numberOfClasses = ceil(sqrt(n));

    // calculates the range;
    range = upperCL - lowerCL;

    //calculates the class width
    classWidth = ceil(range/numberOfClasses);

    // prints the values in the class
    printf("The values are ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", class[i]);
    }

    printf("\nn = %d\n", n);
    printf("Lower Class = %d\n", lowerCL);
    printf("Upper Class = %d\n", upperCL);
    printf("# of Classes = %d\n", numberOfClasses);
    printf("Range = %d\n", range);
    printf("Class Width = %d\n", classWidth);
}