//Write a program to remove blank space in a string?

#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main() {
    char string[MAX_SIZE];
    char result[MAX_SIZE];
    int i=0, j=0;

    printf("Enter a string : ");
    fgets(string, sizeof(string), stdin);

    while(string[i] != '\0'){
        if(!isspace(string[i])){
            result[j] = string[i];
            j++;
        }
        i++;
    }
    result[j] = '\0';
    printf("Modified string : %s\n", result);
    return 0;
}