//Function to calculate n factorial (using recursion)?

#include<stdio.h>

int factorial(int n);

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    printf("factorial is : %d", factorial(n));
    return 0;
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return factorial(n-1) * n;
};