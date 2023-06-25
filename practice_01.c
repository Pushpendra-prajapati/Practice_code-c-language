//write a program to check if given character digit or not?

#include<stdio.h>
int main(){
    char character;
    printf("Enter a character : ");
    scanf("%c", &character);

    if (character >= '0' && character <= '9'){
        printf("The character is a digit.\n");
    } else {
        printf("The character is not a digit.\n");
    }
}