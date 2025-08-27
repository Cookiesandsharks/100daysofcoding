#include <stdio.h>

int main() {
    int x;
    printf("Enter number to be checked:");
    scanf("%d",&x);
    if(x<0){
        printf("Number you entered is a negative number");
    }
    else if(x>0){
        printf("Number you entered is a posiitve number.");
    
    }
    else{
        printf("The number is zero");
    }
}