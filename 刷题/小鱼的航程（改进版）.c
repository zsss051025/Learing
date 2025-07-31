#include<stdio.h>

int main()
{
	int x,n,sum = 0; 
	scanf("%d %d",&x,&n);
	
	for(int i=0;i<n;i++)
	{
		if(x != 6 && x != 7) {
			sum = sum + 250;
		}
		x = x  % 7 + 1;
	}
	
	printf("%d",sum);
	
	return 0;
}
