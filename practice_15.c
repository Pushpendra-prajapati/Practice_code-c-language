//Question : Write a program to print the largest number in an array?

#include <stdio.h>
int main() {
    int n;
    printf("Enter array size :");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements :");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int max;
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i-1]){
            max = arr[i];
        }
    }
    printf("Largest number of array : %d", max);
    return 0;
}