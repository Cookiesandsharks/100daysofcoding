#include <stdio.h>
int main() {
    int num;
    int rev;
    int x;
    printf("Enter number to be checked:");
    scanf("%d",&num);
    rev=0;
    x=num;
    while(num!=0){
        rev=(rev*10)+num%10;
        num=num/10;
    }    
    if(rev==x){
        printf("The number is palindrome");
    }
    else{
        printf("The number is not a palindrome");
    }
}