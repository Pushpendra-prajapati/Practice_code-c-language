// Write a program to check if given is Armstrong number or not?
// 0 1 2 3 4 5 6 7 8 9 is armstrong number because power of 1 is equal to itself.

#include<stdio.h>
#include<math.h>
int main(){
    int number, originalNumber, ramainder, result =0, n = 0;
    printf("Enter an number :");

    scanf("%d", &number);
    originalNumber = number;
    while(originalNumber != 0){
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;
    while( originalNumber =! 0) {
        ramainder = originalNumber % 10;
        result += pow(ramainder, n);
        originalNumber /= 10;
    }
    if(result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;

}