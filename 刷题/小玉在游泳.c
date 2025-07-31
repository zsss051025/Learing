#include<stdio.h>

int main()
{
	double s,step = 2,now_s = 0;
	scanf("%lf",&s);
	
	int count = 0;
	
	while(now_s < s) {
		now_s = step + now_s;
		step = step*0.98;
		count++;
	}
	
	printf("%d",count); 
}
