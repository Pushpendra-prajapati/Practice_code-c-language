//Write a program in C to print the element of an array in reverse order?

#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array :");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n/2; i++){
        int firstValue = arr[i];
        int secondValue = arr[n-i-1];
        arr[n-i-1] = firstValue;
        arr[i] = secondValue;        
    }

    for(int i=0; i<n; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
    return 0;
}