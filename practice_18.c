//Write a program to print the highest frequency character in a string ?

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char string[MAX_SIZE];
    int frequency[256] = {0};
    int maxFrequency = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    int length = strlen(string);

    for (int i = 0; i < length; i++) {
        frequency[string[i]]++;
        if (frequency[string[i]] > maxFrequency) {
            maxFrequency = frequency[string[i]];
            maxChar = string[i];
        }
    }

    printf("The character with the highest frequency is '%c' with a frequency of %d\n", maxChar, maxFrequency);

    return 0;
}
