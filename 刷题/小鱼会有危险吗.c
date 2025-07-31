#include<stdio.h>

int main()
{
	double s,s_now,x,step = 7.0;
	scanf("%lf %lf",&s,&x);
	s_now = 0.0;
	while( s_now < s-x) {
		s_now = step + s_now;
		step =step*0.98;
	} //计算进入探测器范围内（包括进入时）走的历程数
	
	if(s_now>s + x) { //已经走出范围 
		printf("n");
	} else {//仍在范围内 
	
		if(step>(s+x-s_now)) {//可以游出去 
			printf("n"); 
		} else {
			printf("y");
		}
	}
	
	return 0; 
}
