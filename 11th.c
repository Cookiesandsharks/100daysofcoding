#include <stdio.h>

int main() {
    int x;
    printf("Enter number to be checked:");
    scanf("%d",&x);
    if(x%2==1){
        printf("Number you entered is a odd number");
    }
    else{
        printf("Number you enteres is a even number.");
    }
}