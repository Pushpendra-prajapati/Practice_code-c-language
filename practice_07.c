// Write a program to find sum of digits of a number?
#include<stdio.h>

void sumOfDigits(int n);

int main(){
    int num;
    printf("Enter number :");
    scanf("%d", &num);
    sumOfDigits(num);
    return 0;
}

void sumOfDigits(int n){
    int remainder, sum = 0;;
    while(n > 0){
       remainder = n % 10;
       sum += remainder;
       n /= 10;
    };
    printf("Sum of Digits : %d", sum);
}