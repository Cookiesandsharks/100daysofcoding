//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>
int main(){
    int num;
    int x;
    int y;
    int z;
    printf("Enter the number:");
    scanf("%d",&num);
    x=0;
    while(x<10){
        y=6*x+1;
        z=6*x-1;
        x=x+1;
    }
    if (num==y || num==z){
        printf("The number is a prime number");
    }
    else{
        printf("Not prime");
    }
}