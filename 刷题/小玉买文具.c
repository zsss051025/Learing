#include<stdio.h>

#define price 19

int main()

{
	int a,b;
	scanf("%d %d",&a,&b);
	
	int money =a*10 + b;
	
	int num = money/price;
	
	printf("%d",num);
}
