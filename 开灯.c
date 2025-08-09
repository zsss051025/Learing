#include<stdio.h>

int main()
{
	long long int n;
	scanf("%lld",&n);
	
	for(long long int i=1;i<=n;i++) {
		if(i*i<=n) {
			printf("%lld ",i*i); 
		} 

	}
	
	return 0;
 } 
