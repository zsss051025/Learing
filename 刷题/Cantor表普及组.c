#include<stdio.h>

int leijia(int n);

int main()
{
	int n,flag = 0;//flagΪ1˵�������������£�Ϊ0������������� 
	scanf("%d",&n);

	int temp = 1;
	while(n>leijia(temp)) {	
		temp++;
		
		flag++;
		flag = flag % 2;// �����෴ 
	}

	int num =leijia(temp - 1) + 1;
	int i=1;
	
	if(flag == 1) {
		while(num != n) {
			num++;
			i++;
			temp--;
		}
		printf("%d/%d",i,temp);
	} else if(flag == 0 ) {
		while(num != n) {
			num++;
			i++;
			temp--;
		}
		printf("%d/%d",temp,i);
	}
	
	return 0;
}

int leijia(int n)
{
	int sum =0;
	
	for(int i =1;i<=n;i++) {
		sum +=i;
	}
	
	
	return sum;
}
