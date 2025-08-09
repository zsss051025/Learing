#include<stdio.h>

int yueshu_sum(int n);

int main()
{
	int s;
	scanf("%d",&s);
	int a = s;
	while(a != yueshu_sum(yueshu_sum(a)) || a == yueshu_sum(a) ) {
		a++;
	}
	printf("%d %d",a,yueshu_sum(a));
	
	return 0;
}


int yueshu_sum(int n)
{
	int sum =0;
	for(int i=1;i<n;i++) {
		if(n%i == 0) {
			sum =sum + i;
		}
	}
	
	return sum;
}
