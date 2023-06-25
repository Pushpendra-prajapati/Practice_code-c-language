// Write a program to check if given number is natural number ?

#include<stdio.h>
int main(){
    int number;
    printf("Enter Number : ");
    scanf("%d", &number);

    if(number >= 1){
        printf("%d is a Natural number.\n", number);
    } else{
        printf("%d is not a Natural number.\n", number);
    }
    return 0;
}