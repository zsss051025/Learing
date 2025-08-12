#include<stdio.h>

void aaa(int n);

int main()
{
	int n,arr[100] = {0};
	scanf("%d",&n);
	
	aaa(n); 
	
	return 0;
}

void aaa(int n)
{
	if(n == 0) {
		printf("0");
		return;
	} 
	
	int pow = 0;
	int current = 1; 
	
	
	while(current * 2 <=n) {
		current *=2;
		pow++;
	}
	
	if(pow == 1) {
		printf("2");
	} else {
		printf("2(");
		aaa(pow);
		printf(")");
	}

	int remaining = n - current;
	if(remaining > 0) {
		printf("+");
		aaa(remaining);
	}
	
	
}
