// Question : In an array of numbers, find how many times does a number 'x' occurs ?

#include <stdio.h>

int main() {
    int n, x, count = 0;
    printf("Enter array of size : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array of elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter 'x' value : ");
    scanf("%d", &x);

    for(int i=0; i<n; i++){
        if(arr[i] == x){
            count++;
        }
    }
    printf("Number of occurences of x : %d",count);
    return 0;
}