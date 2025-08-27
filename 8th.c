#include <stdio.h>
int main()
{
    int n;
    int y;
    int z;
    printf("Enter n natural numbers to be summed:");
    scanf("%d",&n);
    y=1;
    z=0;
    while(y<=n){
        z=z+y;
        y=y+1;
    }
    printf("sum:%d",z);

    
}