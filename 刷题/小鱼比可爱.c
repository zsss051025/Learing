#include<stdio.h>

int main()
{
	int n,count = 0;;
	scanf("%d",&n);
	int arr[n],flag[n];
	
	for(int i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++) {//ÿֻС��
		count = 0;
		for(int j=0;j<i;j++) {//ÿֻС��������ߵıȽ� 
			if(arr[i] > arr[j]) {
				count++;
			}
		}
		flag[i] = count;
	}
	
	for(int i=0;i<n;i++) {
		printf("%d ",flag[i]);
	}
	
	
	return 0;
}
