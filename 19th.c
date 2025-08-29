//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() {
    int side_a;
    int side_b;
    int side_c;
    printf("Enter 1st side of the triangle:");
    scanf("%d",&side_a);
    printf("Enter 2nd side of the triangle:");
    scanf("%d",&side_b);
    printf("Enter 3rd side of the triangle:");
    scanf("%d",&side_c);
    if(side_a==side_b && side_b==side_c){
        printf("The triangle is an equilateral triangle");
    }
    else if(side_a==side_b || side_b==side_c || side_c==side_a){
        printf("The triangle is an isosceles triangle");
    }
    else{
        printf("The triangle is a scalene triangle");
    }
}