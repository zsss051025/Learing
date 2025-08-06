#include<stdio.h>

int main()
{
	long long int x,n,sum = 1;
	scanf("%d %d",&x,&n);
	
	for(int i=0;i<n;i++) {
		sum = sum*x + sum;
	}
	
	printf("%lld",sum);
	
	return 0;
 } 
