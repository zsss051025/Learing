#include<stdio.h>

int gcd(int a,int b);

int main()
{
	int a,b,c,d,sum1,sum2,idx;
	scanf("%d/%d",&a,&b);
	scanf("%d/%d",&c,&d);
	
	sum1 = a*c;
	sum2 = b*d;
	
	if(sum1 == sum2) {
		printf("1 1");
		return 0;
	}
	if(sum1>sum2) {
		idx = gcd(sum1,sum2);
	} else {
		idx = gcd(sum2,sum1);
	}
	sum1 = sum1/idx;
	sum2 = sum2/idx;
	
	printf("%d %d",sum2,sum1);

	
	return 0;
} 

int gcd(int a,int b) {
	while(b !=0) {
		int temp = b;
		b = a%b;
		a = temp;
	}
	return a; 
}
