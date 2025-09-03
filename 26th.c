#include<stdio.h>
int main()

{
	int choice;
	int x;
	printf("Enter your choice:");
	scanf("%d",&choice);
	x=1;
    while(x<=choice){
        printf("%d\n",x);
        x=x+1;
    }

}