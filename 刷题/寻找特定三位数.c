#include<stdio.h> 

int num_check(int a,int b,int c) {
	int number[10] ={0};
	int num;
	
	num = a;
	while(num > 0) {
		number[num % 10]++;
		num /= 10;
	}
	
	num = b;
	while(num > 0) {
		number[num % 10]++;
		num /= 10;
	}
	
	num = c;
	while(num > 0) {
		number[num % 10]++;
		num /= 10;
	}
	
	if(number[0] > 0) {
		return 0;
	}
	
	for(int i=1;i<=9;i++) {
		if(number[i] != 1) {
			return 0;
		}
	}
	
	return 1;
	
}



int main()
{
	int a,b,c;
	
	for(int i=100;i<=333;i++) {
		a = i;
		b = 2*a;
		c = 3*a;
		
		if(b>999 || c>999) {
			continue;
		}
		
		if(num_check(a,b,c) == 1) {
			printf("%d %d %d\n",a,b,c);
		}
		
	}
	
	return 0;
}
