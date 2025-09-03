//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main() {
    int n;
    int x;
    int product;
    printf("Enter number to be factorial:");
    scanf("%d",&n);
    x=1;
    product=1;
    while(x<=n){
        product=product*x;
        x=x+1;
    }
    printf("Factorial:%d",product);
    
    
}