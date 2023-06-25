#include <stdio.h>

int sumOfDigits(int number) {
    int sum = 0;
    
    // Iterate through each digit
    while (number != 0) {
        // Get the last digit
        int digit = number % 10;
        
        // Add the digit to the sum
        sum += digit;
        
        // Remove the last digit from the number
        number /= 10;
    }
    
    return sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int sum = sumOfDigits(number);
    printf("Sum of digits: %d\n", sum);
    
    return 0;
}
