#include<stdio.h>


int main()
{
	int N,M;
	scanf("%d %d",&N,&M); 
	
	int min;
	if (N>M) {
		min = M;
	} else {
		min = N;
	}
	
	int sum1=0;
	for(int i=1;i<=min;i++) {
		sum1 +=(N-i+1)*(M-i+1);
	}
	
	int sum2 = 0;
	sum2 = (N*(N+1)/2)*(M*(M+1)/2) - sum1;
	
	printf("%d %d",sum1,sum2);
	
	return 0;
}



