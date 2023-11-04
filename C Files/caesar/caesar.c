#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; i < strlen (argv[1]); i++)
    {
        if(!isdigit(argv[1][i]))
        {
        printf("Usage: ./caesar key\n");
        return 1;
        }
    }

    int k = atoi(argv[1]);

    string plain = get_string("Plain Text: ");
    printf("CipherText: ");

    for (int j = 0; j < strlen (plain); j++)
    {
        if (isupper(plain[j]))
        {
             printf("%c", (plain[j] + k - 65) % 26 + 65);
        }
        else if (islower(plain[j]))
        {
            printf("%c", (plain[j] + k - 97) % 26 + 97);
        }
        else
        {
            printf("%c", plain[j]);
        }

    }
    printf("\n");
}