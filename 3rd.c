//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main() {
    int area;
    int perimeter;
    int lenght;
    int breadth;
    printf("Enter lenght of rectangle:");
    scanf("%d",&lenght);
    printf("Enter breadth of rectangle:");
    scanf("%d",&breadth);
    perimeter=2*lenght+2*breadth;
    printf("perimeter of the rectangle is:%d\n",perimeter);
    area=lenght*breadth;
    printf("area of the rectangle:%d\n", area);
    return 0;
}

