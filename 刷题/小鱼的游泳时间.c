#include<stdio.h>

int main()
{
	int a,b,c,d,h,min,sum_min;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	sum_min = c*60 + d - a*60 - b;
	
	h = sum_min/60;
	min = sum_min % 60;
	
	printf("%d %d",h,min);
}
