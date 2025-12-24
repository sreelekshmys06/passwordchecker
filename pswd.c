#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() 
{
    char pswd[100];
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    int i, length;
    printf("Enter the password: ");
    scanf("%s", pswd);
    length = strlen(pswd);
    for (i = 0; i < length; i++)
    {
        if (isupper(pswd[i]))
            hasUpper = 1;
        else if (islower(pswd[i]))
            hasLower = 1;
        else if (isdigit(pswd[i]))
            hasDigit = 1;
        else
            hasSpecial = 1;
    }
    if (length < 6) 
    {
        printf("Password Strength: Weak\n");
    }
    else if (length >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) 
    {
        printf("Password Strength: Strong\n");
    }
    else if (hasLower && hasDigit) 
    {
        printf("Password Strength: Medium\n");
    }
    else
    {
        printf("Password Strength: Weak\n");
    }
    return 0;
}
