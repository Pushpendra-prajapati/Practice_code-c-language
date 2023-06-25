// Write a program to convert all lowercase vowels to uppercase in a string?

#include <stdio.h>

int main()
{
    char string[100];

    printf("Enter a string :");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            string[i] = string[i] - 32;
        }
    }

    printf("Modified string : %s", string);
    return 0;
}
