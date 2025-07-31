#include<stdio.h>

int main()
{
	int n,count = 1,max = 1;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	if(n == 1) {
		printf("%d",max);
		return 0;
	}
	
	for(int i=0;i<n-1;i++)
	{
		if(arr[i+1] == arr[i]+1) {
			count++;
			if(count > max) {
				max = count;
			}
		} else {			
			count = 1;
		}
	}
	
	printf("%d",max);
	
	return 0;
}
