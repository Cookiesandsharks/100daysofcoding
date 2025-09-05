//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
int main(){
    int num;
    int x;
    int y;
    int z;
    int t;
    printf("Enter the number:");
    scanf("%d",&num);
    z=0;
    t=num;
    while(num!=0){
        x=num%10;
        y=x*x*x;
        z=z+y;
        num=num/10;
    }
    if (z==t){
        printf("The number is armstrong");
    }
    else{
        printf("Not armstrong");
    }
}