#include<stdio.h>

int main()
{
	int n,m,min,sum;
	scanf("%d %d",&n,&m);
	int arr[n];
	
	for(int i=0;i<n;i++) {		
		scanf("%d",&arr[i]);
	}
	
	sum = 0; 
	for(int i=0;i<m;i++) {
		sum +=arr[i];	
	}
	min = sum;
	
	for(int i=1;i<= n-m;i++) {//像是一个固定大小的窗口抛掉最上方的数据，读取入最下方的数据 
		sum = sum - arr[i-1] + arr[i + m -1];
	
		if(sum < min ) {
			min = sum;
		}
	}	
	
	
	printf("%d",min);
	
	return 0;
}
