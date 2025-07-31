#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[101],i=0,num1;
	while(scanf("%d",&num1 ) == 1 && num1 !=0) {//scanf() == 1代表成功读取 
		num[i] = num1;
		i++;
	}
	
	for(int j=i-1;j>=0;j--) {
		printf("%d ",num[j]);
	}

	return 0;	
}
