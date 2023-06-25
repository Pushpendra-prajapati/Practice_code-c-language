// Write a program to print prime numbers in a range?

#include<stdio.h>
int main() {
    int a, b;
    printf("Enter range(e.g. 1 10) : ");
    scanf("%d %d", &a, &b);

    while(a<b){
        for(int i=2; i<a; i++){
           for(int j) if(a % i != 0){
                printf(" %d ", a);
                break;
            }
        }
        a++;
    }
    return 0;
}