#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	
	for(int i=0;i<T;i++) {
		long long int N,K;
		
		scanf("%lld %lld",&N,&K);
		
		long long sum = K * (K + 1) /2;
		
		if(sum <= N ) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
	
	
	return 0;
}
