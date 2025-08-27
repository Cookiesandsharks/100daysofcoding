#include <stdio.h>
int main() {
    int num1;
    int num2;
    int sum;
    int diff;
    int pro;
    int quo;
    printf("Enter 1st number:");
    scanf("%d",&num1);
    printf("Enter 2nd number:");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("Sum of the given numbers:%d\n",sum);
    diff=num1-num2;
    printf("Difference of the guven numbers are:%d\n",diff);
    pro=num1*num2;
    printf("Product of the given mumbers are:%d\n",pro);
    quo=num1/num2;
    printf("Qoutient of the given numbers are:%d\n",quo);
    return 0;
}