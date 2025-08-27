//Write a program to input two numbers and display their sum.
#include <stdio.h>
int main() {
    int num1;
    int num2;
    int sum;
    printf("Enter 1st number:");
    scanf("%d",&num1);
    printf("Enter 2nd number:");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("Sum of the given numbers:%d",sum);
    return 0;

}
