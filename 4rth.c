//Write a program to calculate the area and circumference of a circle given its radius
#include <stdio.h>
int main() {
    float radius;
    float area;
    float circumference;
    printf("Enter radius of circle:");
    scanf("%f",&radius);
    circumference=2*3.14*radius;
    printf("circumference of circle is:%f\n",circumference);
    area=3.14*radius*radius;
    printf("area of acircle is:%f\n", area);
    return 0;

};
