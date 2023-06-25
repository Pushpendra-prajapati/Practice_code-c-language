// Pattern Qustion 

#include<stdio.h>
int main(){
    int value;
    printf("Enter value : ");
    scanf("%d", &value);

    for(int i=1; i<value; i++){
        for(int j=1; j<=value; j++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}