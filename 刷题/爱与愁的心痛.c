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
	
	for(int i=1;i<= n-m;i++) {//����һ���̶���С�Ĵ����׵����Ϸ������ݣ���ȡ�����·������� 
		sum = sum - arr[i-1] + arr[i + m -1];
	
		if(sum < min ) {
			min = sum;
		}
	}	
	
	
	printf("%d",min);
	
	return 0;
}
