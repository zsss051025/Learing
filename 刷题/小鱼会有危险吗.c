#include<stdio.h>

int main()
{
	double s,s_now,x,step = 7.0;
	scanf("%lf %lf",&s,&x);
	s_now = 0.0;
	while( s_now < s-x) {
		s_now = step + s_now;
		step =step*0.98;
	} //�������̽������Χ�ڣ���������ʱ���ߵ�������
	
	if(s_now>s + x) { //�Ѿ��߳���Χ 
		printf("n");
	} else {//���ڷ�Χ�� 
	
		if(step>(s+x-s_now)) {//�����γ�ȥ 
			printf("n"); 
		} else {
			printf("y");
		}
	}
	
	return 0; 
}
