//Question : Write a program to insert an element at the end of array?

#include <stdio.h>
int main(){
    int n;
    printf("Enter the array size :");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements :");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int element;
    printf("Enter the element to insert : ");
    scanf("%d", &element);

    n++;
    int newArr[n];
    for(int i=0; i<n-1; i++){
        newArr[i] = arr[i];
    }

    newArr[n-1] = element;

    printf("Updated array : ");
    for(int i=0; i<n; i++){
        printf(" %d", newArr[i]);
    }
    return 0;
}