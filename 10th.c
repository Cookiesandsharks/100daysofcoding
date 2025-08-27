//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int sec;
    int min;
    int h;
    int x;
    printf("Enter seconds to be converted:");
    scanf("%d",&sec);
    h=sec/3600;
    x=sec%3600;
    min=x/60;
    sec=x%60;
    printf("%d:%d:%d",h,min,sec);
    return 0;

}
