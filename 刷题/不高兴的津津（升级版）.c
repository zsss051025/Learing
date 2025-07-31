#include<stdio.h>

int main()
{
	int n,result = 0,sum=0;
	scanf("%d",&n);
	
	int arr1[n],arr2[n];
	
	for(int i=0;i<n;i++) {
		scanf("%d %d",&arr1[i],&arr2[i]);
	}
	
	for(int i=0;i<n;i++) {
		result = result + arr1[i] + arr2[i] - 8;
		sum = sum +result;
	}
	printf("%d\n",sum);
	
	
	return 0;
}



