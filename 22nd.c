//Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>

int main() {
    int cost_price;
    int sell_price;
    int diff;
    int loss_per;
    int profit_per;
    int x;
    printf("Enter the cost price number:");
    scanf("%d", &cost_price);
    printf("Enter the selling price number:");
    scanf("%d", &sell_price);
    if (sell_price>cost_price){
        diff=sell_price-cost_price;
        profit_per=(diff/cost_price)*100;
        printf("Profit %d%",profit_per);
    }
    else if(cost_price>sell_price){
        diff=cost_price-sell_price;
        loss_per=((diff/cost_price)*100);
        printf("Loss %d%",loss_per);
    }
    else{
        printf("No profit no loss");
    }
    
       
}