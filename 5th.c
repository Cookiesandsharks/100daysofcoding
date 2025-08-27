//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    float fahr;
    float celsius;
    int lower;
    int upper;
    int step;
    lower=0;
    upper=300;
    step=20;
    celsius=lower;
    printf("Celsiusto Farenhite table\n");
    while(celsius<=upper){
        fahr=celsius*(9.0/5.0)+32;
        printf("%3.0f %6.1f\n",celsius,fahr);
        celsius=celsius+step;
    }

    

}
