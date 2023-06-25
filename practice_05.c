//Write a program to check if a number is prime or not?

#include <stdio.h>
int main(){
    int num;
    printf("Enter Number :");
    scanf("%d", &num);

    if(num == 1){
        printf("1 is a prime number.\n");
    }

    for(int i=2; i<num; i++){
        if(num % i == 0){
            printf("%d is not a prime number.\n", num);
            break;
        } else {
            printf("%d is a prime number.\n", num);
            break;
        }
    }
    return 0;
}