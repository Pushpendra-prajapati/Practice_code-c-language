//Write a program in c to print alphabet letters in english using a pointer?
#include <stdio.h>
int main(){
    char alphabet[26];
    for(char *i= alphabet; *i != '\0'; *i++){
        printf("%c ", *i);
    };
    printf("\n");
    return 0;
}

// #include <stdio.h>

// int main() {
//     char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
//     char *ptr = alphabet;  // Pointer to the start of the array

//     printf("Alphabet: ");
//     while (*ptr != '\0') {
//         printf("%c ", *ptr);
//         ptr++;  // Move the pointer to the next element
//     }
//     printf("\n");

//     return 0;
// }
