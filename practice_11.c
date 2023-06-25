// Make your own pow function ?

#include<stdio.h>

int power(int a, int b);

int main(){
    int a,b;
    printf("Enter a ki power b : ");
    scanf("%d %d", &a, &b);

    printf("%d ki power %d = %d", a, b, power(a,b));
    return 0;
}

int power(int a, int b){
    int ans = 1;
    for(int i=1; i<=b; i++){
        ans *= a;
    }
    return ans;
}