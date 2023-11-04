#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

bool valid(string password)
{
    bool upper = false;
    bool lower = false;
    bool num = false;
    bool symbol = false;

    for(int i = 0; i < strlen(password); i++)
    {

        if(isupper(password[i]))
        {
            upper = true;
        }
        if(islower(password[i]))
        {
            lower = true;
        }
        if(isdigit(password[i]))
        {
            num = true;
        }
        if(!isalnum(password[i]))
        {
            symbol = true;
        }
        if(upper == true && lower == true && num == true && symbol == true)
        {
            return true;
        }
    }
    return false;
}
