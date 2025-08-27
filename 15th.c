#include <stdio.h> 

int main() {
    int x;
    int y;
    int z;
    printf("Enter first number:");
    scanf("%d", &x);
    printf("Enter second number:");
    scanf("%d", &y);
    printf("Enter third number:");
    scanf("%d", &z);
    if(x>y && x>z){
        printf("%d is the largest number among the three numbers given" ,x);
    }
    else if(y>x && y>z){
        printf("%d is the largest number among the three numbers given",y);
    }
    else{
        printf("%d is the largest number among the three numbers given",z);
    }
}