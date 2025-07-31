#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int arr[1001],narr[1001],flagarr[1001] = {0};
	int n,flag = 1;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	
	if(n == 1) {
		printf("Jolly");
		return 0;
	}
	for(int i=1;i<n;i++) {
		narr[i-1] = i;
	}
	
	for(int i=0;i<n-1;i++) {//[1,n-1]Ã¿¸öÊý×Ö 
		int target = narr[i];
		for(int j=0;j<n-1;j++)
		if(abs(arr[j]-arr[j+1]) == target)  {
			flagarr[i] = 1;
			break;
		}
	}
	
	for(int i=0;i<n-1;i++)
	{
		if(flagarr[i] == 0) {
			flag = 0;
			break;
		}
	}
	if(flag == 1) {
		printf("Jolly");
	} else {
		printf("Not jolly");
	}
	
	return 0;
} 
