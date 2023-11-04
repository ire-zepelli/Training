#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    int age;
} person;

int main(void)
{
    person test[3];
    test[0] = (person){"test1", 1};
    test[1] = (person){"test2", 2};
    test[2] = (person){"test3", 3};
    printf("Old\n");

        for (int i = 0; i < 3; i++)
    {
        printf("%d. %s is %d years old\n", i + 1, test[i].name, test[i].age);
    }

    person temp;
    test[2] = temp;
    printf("\n\nNEW\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s is %d years old\n", i + 1, test[i].name, test[i].age);
    }
}