//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>

int main() {
    int n;
    int rev;
    printf("Enter number to be reversed:");
    scanf("%d",&n);
    rev=0;
    while(n!=0){
        rev=(rev*10)+n%10;
        n=n/10;
    }
    printf("Reversed number:%d",rev);
    return 0;
}