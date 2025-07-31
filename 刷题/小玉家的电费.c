#include<stdio.h>

int main()
{
	int n;
	double money;
	scanf("%d",&n);
	
	if(n <= 150)
	{
		money = n*0.4463;
	} else if( 151 <= n && n <= 400) {
		money = 150*0.4463 + (n - 150)*0.4663;
	} else if(n>=401) {
		money = 150*0.4463 + (400-150)*0.4663 + (n - 400)*0.5663;
	}
	
	printf("%.1lf",money);
}
