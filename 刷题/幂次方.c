#include<stdio.h>





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
	if(n == 1) {
		printf("2(0)");
		return;
	} else if(n == 2) {
		printf("2");
		return;
	} else{
		printf("2(");
		aaa(n-1);
		printf(")");
	}
	
}
