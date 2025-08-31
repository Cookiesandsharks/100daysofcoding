// Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>

int main() {
    int days;
    int charges;
    printf("Enter late days:");
    scanf("%d",&days);
    if (days<=5){
        charges=days*2;
        printf("Charges are:%d",charges);
    }
    else if(days>5 && days<=10){
        charges=days*4;
        printf("Charges are:%d",charges);
    }
    else if(days>10 && days<30){
        charges=days*6;
        printf("Charges are:%d",charges);
    }
    else{
        printf("Membership cancelled!!");
    }
    return 0;
}