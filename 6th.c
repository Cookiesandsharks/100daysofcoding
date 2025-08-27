//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main() {
    int x;
    int y;
    int a;
    printf("Enter 1st number:");
    scanf("%d",&x);
    printf("Enter 2nd number:");
    scanf("%d",&y);
    printf("Before swap first number is:%d\n",x);
    printf("Before swap second number is:%d\n",y);
    a=x;
    x=y;
    y=a;
    printf("After swap 1st:%d\n",x);
    printf("After swap 2nd:%d\n",y);
    return 0;

};
