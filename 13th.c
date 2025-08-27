#include <stdio.h>

int main() {
    int x;
    printf("Enter year to be checked:");
    scanf("%d",&x);
    if(x%4==0 && x%100==0){
        if (x%400==0){
            printf("Year you entered is a leap year");
        }
        else{
            printf("Year is not a leap year");
        }
    }
    else if(x%4==0 && x%100!=0){
        printf("The year is a leap year");
    }
    else{
        printf("Year is not leap year");
    }
}