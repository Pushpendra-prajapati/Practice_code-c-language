// Write a program to print the average of 3 numbers ?
# include <stdio.h>
int main() {
     int num1, num2, num3;
     printf("Enter the three numbers : ");
     scanf("%d %d %d", &num1, &num2, &num3);
     
     int average = (num1+num2+num3)/3;
     printf("Average of three numbers is : %d", average);
     return 0;
}