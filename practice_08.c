//Function to calculate square of number?

#include<stdio.h>

int calSquare(int num);

int main(){
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    calSquare(num);
    return 0;
}

int calSquare(int num){
    printf("Square is : %d", num*num);
}