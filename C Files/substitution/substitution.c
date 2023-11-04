#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    int letter_amount = 0;
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isdigit(argv[1][i]))
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
        letter_amount++;
    }
    if (letter_amount != 26)
    {
        printf("Key must contain 26 letters\n");
        return 1;
    }

    string plain = get_string("Plain Text: ");
    printf("Cipher Text: ");

    for (int j = 0; j < strlen(plain); j++)
    {
        if (isupper(plain[j]))
        {
            printf("%c", toupper(argv[1][plain[j] - 65]));
        }
        else if (islower(plain[j]))
        {
            printf("%c", tolower(argv[1][plain[j] - 97]));
        }
        else
        {
            printf("%c", plain[j]);
        }
    }
    printf("\n");
}